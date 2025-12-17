#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

void PushAtBottom(stack<int> &S, int value)  //  saying: “This function takes a reference to a stack of integers and an integer value.”

/* //? Why do you need to write stack<int> again?
Because the function needs to know what type of stack it is working with.
C++ requires you to specify the type for every variable and parameter, even if you already created a variable of that type elsewhere.

*/
{ // Passing the s object.  and a int value.
    if (S.empty())
    {
        S.push(value);
        return;
    }

    int temp = S.top();
    S.pop();                // rempving the first element after adding it in temp.
    PushAtBottom(S, value); // again calling the function to placing it back not declaring. but now the stack will be empty.
    S.push(temp);
}

int main()
{

    stack<int> S;   // this creates a stack int named s. 
    S.push(3);
    S.push(2);
    S.push(1);

    PushAtBottom(S, 99);  //? Calling the function not declaring. so we passed the stack and 

    // Print stack contents (top to bottom)
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;

    return 0;
}