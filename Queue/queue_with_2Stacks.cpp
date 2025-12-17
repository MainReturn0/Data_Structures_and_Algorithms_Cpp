#include <iostream>
#include <algorithm>

#include <stack> //? We will use Stack from STL.
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int val) // O(n).
    {

        // S1 -> S2.
        while (!s1.empty())
        {
            s2.push(s1.top()); // putting s1's top in s2
            s1.pop();          //? in the end the stack S1 will be empty.
        }
        s1.push(val); // now we will put our new value in it.

        while (!s2.empty())
        {
            s1.push(s2.top()); // Now we have
            s2.pop();          // Now s2 is empty
        }

        //? Now we will have a reverse order that we will get a stack as such a Queue
    }
    void pop() // O(1)
    {
        s1.pop();
    }
    int front() // O(1)
    {
        return s1.top();
    }
    bool empty()
    {
        return s1.empty();
    }
};

int main()
{
    Queue q1;

    q1.push(10);
    q1.push(100);
    q1.push(1000);
    q1.push(10000);

    while (!q1.empty())
    {
        cout << q1.front() << endl;
        q1.pop();
    }

    return 0;
}



/* 
🧠 Final Takeaways From This Round:
        Stack is LIFO — to simulate FIFO, we reverse the order using two stacks

        You can’t remove anything without pop()

        front() only peeks — if you want to act like a real queue, you need both

        Forgetting pop() leads to infinite loops and ghost values   */