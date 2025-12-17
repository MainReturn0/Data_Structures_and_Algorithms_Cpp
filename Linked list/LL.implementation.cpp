#include <iostream>
using namespace std;

// Defining the Node class
class Node {
    int value;
    Node* next;

public:
    // Constructor to initialize the node
    Node(int val) {
        value = val;  // Assigning the value
        next = NULL;   // Initially, next points to NULL, indicating it's the last node
    }

    // To make the value and next accessible outside the class
    int getValue() {
        return value;
    }

    Node* getNext() {
        return next;
    }

    void setNext(Node* nextNode) {
        next = nextNode;
    }
};

// Defining the List class
class List {
    Node* head;
    Node* tail;

public:
    // Constructor to initialize the linked list as empty
    List() {
        head = NULL;
        tail = NULL;
    }

    // Pushes a new node with value to the front of the list
    void push_front(int val) {
        Node* newNode = new Node(val);  // Create a new node with the given value

        if (head == NULL) {
            head = tail = newNode;  // If the list is empty, new node is both head and tail
        } else {
            newNode->setNext(head);  // Point the new node's next to the current head
            head = newNode;  // Update head to point to the new node
        }
    }

    // Print the list from head to tail
    void printList() {
        Node* current = head;
        while (current != NULL) {
            cout << current->getValue() << " ";
            current = current->getNext();
        }
        cout << endl;
    }
};

// Main function
int main() {
    List ll;  // Create an object of the List class

    ll.push_front(10);  // Adding nodes to the front
    ll.push_front(20);
    ll.push_front(30);

    ll.printList();  // Output: 30 20 10

    return 0;
}