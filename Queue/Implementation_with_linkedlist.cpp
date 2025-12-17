#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

class node
{ //? defined a individual node now.

public:
    // node defination

    int data;
    node *next; // holding the address.

    node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};

class Queue
{

public:
    node *head;
    node *tail;
    Queue()
    {
        head = nullptr;
        tail = nullptr;
    }

    ~Queue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }

    void enqueue(int val)
    {
        node *newNode = new node(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            tail->next = newNode; // moving my tail to the new element.
        }
        tail = newNode;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        int frontVal = head->data;
        node *temp = head;
        head = head->next;
        if (head == nullptr)
        {
            tail = nullptr;
            /* code */
        }
        delete temp;
        return frontVal;
    }
    bool isEmpty()
    {
        return head == nullptr;
    }
    int peek()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
};

int main()
{

    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    while (!q.isEmpty())
    {
        cout << q.dequeue() << endl;
    }

    return 0;
}