#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
using namespace std;

template <class T> // Created a genaric class  that can work with any data type.
class Stack
{               // defining a class named stack which will act like a stack.
    list<T> ll; // our linked list. a list container to store elements of type T.  //? ll is the name of the list.
public:
    void push(const T &value)
    {
        ll.push_front(value);
    }
    void pop()
    {
        ll.pop_front(); // removing the first element as we remove only top from a stack.
    }

    T top() // returns the value at the top of the stack.
    {
        return ll.front(); //? returning the first element.
    }
    bool isEmpty()
    {
        return ll.empty(); // returning the size of the list.
    }

    // now we need to push front which will act as a head.
};

int main()
{

    // Normally: Stack intStack;   // for a non-template class
    // With template: Stack<int> intStack; // specify the type in angle brackets
    Stack<int> intStack; //? creates an object named intStack of the generic class Stack. in object we must declare a size like <int>.

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    while (!intStack.isEmpty())
    {
        cout << intStack.top() << " ";

        intStack.pop(); // by removing the head we are making the next element as head, then we will print the next one.
        //? If you didn't call pop(), the top element would never be removed, and the loop would run forever (infinite loop).
    }
    cout << endl;

    return 0;
}