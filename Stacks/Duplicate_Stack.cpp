#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

bool DuplicateParenthesis(string str)
{

    stack<char> s; // creating a stack with char and named it s.
    // now we will trevarse the whole equation one by one and will add then to stack untill we find a closing bracket.

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch != ')')
        {
            s.push(ch); // means: call push() with argument x
        }

        else
        {
            if (s.top() == '(')
            {
                return true;
            }
            while (s.top() != '(')
            {
                s.pop(); //? In C++, anything with () at the end is a function call. here, call the pop method on object s.
            }
            s.pop();
        }
    }
    return false;
}

int main()
{

    string str1 = "((a+b))";        // True
    string str2 = "((a+b)+ (a+b))"; // False, means no duplicasy, so  0 output expected
    cout << DuplicateParenthesis(str1) << endl;
    cout << DuplicateParenthesis(str2) << endl;

    return 0;
}