/*
 * AUTOMATED INVENTORY MANAGEMENT SYSTEM
 * -------------------------------------
 * Concepts Covered:
 * 1. OOP (Classes, Encapsulation)
 * 2. Data Structures:
 * - Linked List (For scalable product storage)
 * - Stack (For sales history and 'Undo' functionality)
 * 3. Dynamic Memory Management (new/delete)
 */

#include <iostream>
#include <string>
#include <iomanip> // For std::setw (formatting output)

using namespace std;

// ---------------------------------------------------------
// 1. DATA MODEL (The Objects)
// ---------------------------------------------------------

// Represents a single item in the shop
class Product {
private:
    int id;
    string name;
    int quantity;
    double price;  

public:
    Product(int pId, string pName, int pQty, double pPrice) {
        id = pId;
        name = pName;
        quantity = pQty;
        price = pPrice;
    }

    // Getters
    int getId() const { return id; }
    string getName() const { return name; }
    int getQty() const { return quantity; }
    double getPrice() const { return price; }

    // Setters
    void updateQty(int qty) { quantity = qty; }
    void addStock(int amount) { quantity += amount; }
    void reduceStock(int amount) { quantity -= amount; }
};

// Represents a generic Node for the Linked List
struct ProductNode {
    Product* data;      // Pointer to a product object
    ProductNode* next;  // Pointer to the next node in the list
};

// Represents a Sale transaction (for the Stack)
struct SaleRecord {
    int productId;
    int qtySold;
    double totalRevenue;
};

struct SaleNode {
    SaleRecord data;
    SaleNode* next;
};

// ---------------------------------------------------------
// 2. INVENTORY MANAGEMENT (Linked List Implementation)
// ---------------------------------------------------------

class Inventory {
private:
    ProductNode* head; // Start of the linked list

public:
    Inventory() {
        head = nullptr;
    }

    // DSA CONCEPT: Inserting into a Linked List
    // Dynamic Memory Allocation used here with 'new'
    void addProduct(int id, string name, int qty, double price) {
        // Check if ID already exists
        if (findProduct(id) != nullptr) {
            cout << "Error: Product ID " << id << " already exists!\n";
            return;
        }

        Product* newProduct = new Product(id, name, qty, price);
        ProductNode* newNode = new ProductNode;
        newNode->data = newProduct;
        newNode->next = nullptr;

        // If list is empty, make new node the head
        if (head == nullptr) {
            head = newNode;
        } else {
            // Traverse to the end
            ProductNode* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Product '" << name << "' added successfully.\n";
    }

    // Helper to find a product by ID
    Product* findProduct(int id) {
        ProductNode* temp = head;
        while (temp != nullptr) {
            if (temp->data->getId() == id) {
                return temp->data;
            }
            temp = temp->next;
        }
        return nullptr;
    }

    void displayInventory() {
        if (head == nullptr) {
            cout << "\nInventory is empty.\n";
            return;
        }

        cout << "\n-------------------------------------------------\n";
        cout << setw(5) << "ID" << setw(20) << "Name" << setw(10) << "Qty" << setw(10) << "Price($)" << endl;
        cout << "-------------------------------------------------\n";

        ProductNode* temp = head;
        while (temp != nullptr) {
            Product* p = temp->data;
            cout << setw(5) << p->getId() 
                 << setw(20) << p->getName() 
                 << setw(10) << p->getQty() 
                 << setw(10) << fixed << setprecision(2) << p->getPrice() << endl;
            temp = temp->next;
        }
        cout << "-------------------------------------------------\n";
    }

    // DSA CONCEPT: Memory Cleanup
    // Destructor to free all dynamically allocated memory to prevent leaks
    ~Inventory() {
        ProductNode* current = head;
        while (current != nullptr) {
            ProductNode* nextNode = current->next;
            delete current->data; // Delete the Product object
            delete current;       // Delete the Node struct
            current = nextNode;
        }
    }
};

// ---------------------------------------------------------
// 3. SALES TRACKER (Stack Implementation)
// ---------------------------------------------------------

class SalesStack {
private:
    SaleNode* top; // Top of the stack

public:
    SalesStack() {
        top = nullptr;
    }

    // DSA CONCEPT: Push Operation
    // Records a new sale at the top of the history
    void pushSale(int pId, int qty, double total) {
        SaleNode* newNode = new SaleNode;
        newNode->data.productId = pId;
        newNode->data.qtySold = qty;
        newNode->data.totalRevenue = total;
        
        // Link new node to the current top
        newNode->next = top;
        // Update top to be the new node
        top = newNode;
    }

    // DSA CONCEPT: Pop Operation
    // Removes the most recent sale (Undo feature)
    // Returns true if successful, false if stack is empty
    bool popSale(SaleRecord &recordOut) {
        if (top == nullptr) {
            return false;
        }

        SaleNode* temp = top;
        recordOut = temp->data; // Copy data to return it
        
        top = top->next; // Move top pointer down
        
        delete temp; // Free memory
        return true;
    }

    void displayHistory() {
        if (top == nullptr) {
            cout << "\nNo recent sales.\n";
            return;
        }
        cout << "\n--- Recent Sales History (Newest First) ---\n";
        SaleNode* temp = top;
        while (temp != nullptr) {
            cout << "Sold ID: " << temp->data.productId 
                 << " | Qty: " << temp->data.qtySold 
                 << " | Total: $" << temp->data.totalRevenue << endl;
            temp = temp->next;
        }
    }
    
    // Destructor
    ~SalesStack() {
        while (top != nullptr) {
            SaleNode* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

// ---------------------------------------------------------
// 4. MAIN APPLICATION CONTROLLER
// ---------------------------------------------------------

int main() {
    Inventory shopInventory;
    SalesStack salesHistory;

    int choice;
    
    // Pre-loading some dummy data for testing
    shopInventory.addProduct(101, "Arduino Uno", 10, 25.00);
    shopInventory.addProduct(102, "Resistor Pack", 50, 5.50);
    shopInventory.addProduct(103, "OLED Display", 5, 12.00);

    do {
        cout << "\n=== INVENTORY MANAGEMENT SYSTEM ===\n";
        cout << "1. Add New Product\n";
        cout << "2. View Inventory\n";
        cout << "3. Sell Product\n";
        cout << "4. View Sales History (Stack)\n";
        cout << "5. Undo Last Sale\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int id, qty;
                string name;
                double price;
                cout << "Enter ID: "; cin >> id;
                cout << "Enter Name: "; cin.ignore(); getline(cin, name);
                cout << "Enter Qty: "; cin >> qty;
                cout << "Enter Price: "; cin >> price;
                shopInventory.addProduct(id, name, qty, price);
                break;
            }
            case 2:
                shopInventory.displayInventory();
                break;
            case 3: {
                int id, qty;
                cout << "Enter Product ID to sell: "; cin >> id;
                Product* p = shopInventory.findProduct(id);
                
                if (p == nullptr) {
                    cout << "Product not found!\n";
                } else {
                    cout << "Current Stock: " << p->getQty() << ". Enter Qty to sell: ";
                    cin >> qty;
                    if (qty > p->getQty()) {
                        cout << "Error: Not enough stock!\n";
                    } else {
                        // 1. Reduce Stock
                        p->reduceStock(qty);
                        // 2. Push to Stack
                        double total = qty * p->getPrice();
                        salesHistory.pushSale(id, qty, total);
                        cout << "Sale recorded! Revenue: $" << total << endl;
                    }
                }
                break;
            }
            case 4:
                salesHistory.displayHistory();
                break;
            case 5: {
                // UNDO FEATURE
                SaleRecord lastSale;
                if (salesHistory.popSale(lastSale)) {
                    // Find product and restore stock
                    Product* p = shopInventory.findProduct(lastSale.productId);
                    if (p != nullptr) {
                        p->addStock(lastSale.qtySold);
                        cout << "Undo Successful! Restored " << lastSale.qtySold 
                             << " units to Product ID " << lastSale.productId << endl;
                    } else {
                        cout << "Undo Error: Product no longer exists in inventory.\n";
                    }
                } else {
                    cout << "No sales to undo.\n";
                }
                break;
            }
            case 6:
                cout << "Exiting system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}