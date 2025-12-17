//? Remove and detect a cycle. Using FLoyd's Cycle detection Algarithm.(also known as Tortoise and Hare method)

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next; // next will hold an address of any passed node.

    // constructor for a default value of a Node.

    Node(int val = 0)
    {
        data = val;
        next = nullptr; // nullptr is a c++ keyword.
    }
};

// now we need a sequence of Nodes.

class Linkedlist // The class name is Linkedlist
{

public:
    Node *head;
    Node *tail;

    Linkedlist()
    {
        head = nullptr; // head is empty as well.
        tail = nullptr; // head is empty as well.
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // Creates a new node with value.
        newNode->next = head;          //	Sets its next pointer to the current head.
        head = newNode;                // Updates head to point to this new node.
        if (tail == nullptr)
            tail = newNode; // First node is both head and tail
    }

    void detectAndRemove()
    {
        Node *slow = head;
        Node *fast = head;

        // Now we will play a while loop to detect the cycle.
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                cout << "Loop detected" << endl;
                removeCycle(head, slow, fast);
                return;
            }
        }
        cout << "we didn't find any loop here." << endl;
    }

    void removeCycle(Node *head, Node *slow, Node *fast)
    {
        slow = head;
        // Special case: if the cycle starts at head
        if (slow == fast) {
            while (fast->next != slow) {
                fast = fast->next;
            }
            fast->next = nullptr;
            return;
        }
        Node *prev = nullptr;
        while (slow != fast)
        {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = nullptr;
    }
};

int main()
{

    //! Now if we wannt to put an value to the empty list we have to create an object first to accress the function of this class

    Linkedlist list;    // Creates the object (real bookshelf)
    list.push_front(4); // Adds a book to it
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);

    // create a loop for testing
    list.tail->next = list.head; // creates a loop.

    list.detectAndRemove();

    // check if loop is removed by traversing the list
    Node* temp = list.head;
    cout << "List after loop removal: ";
    int count = 0;
    while (temp != nullptr && count < 10) { // count to avoid infinite loop in case of failure
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;

    return 0;
}

/* //? 🧠 Why can’t we access class functions without creating an object?

!   Imagine Linkedlist is a blueprint for a bookshelf.
    The push_front() function is like a method to add a book.

    Now, can you put a book on a blueprint?
    ❌ Nope.
    You need a real bookshelf (an object) made from the blueprint first.


! 🛠️ Can we call it without creating an object?

Yes — but only if the function is marked as  static.
Static functions don’t need an object and don’t touch instance data like head.

*/
