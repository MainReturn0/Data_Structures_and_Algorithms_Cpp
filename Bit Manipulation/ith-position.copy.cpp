/*
? In C++, integers like int are treated as whole numbers, not specifically as binary, internally. However, when you perform bitwise operations (like num >> i & 1),
 C++ manipulates the binary representation of that number at the bit level. So, although the number is stored as a regular integer, 
 the bitwise operations essentially allow you to work with it at the binary level.

 */

#include <iostream>
using namespace std;

void BinaryRepresentation(int x)
{
    for (int i = 7; i >= 0; i--)
    {
        cout << ((x >> i) & 1) << endl;
    }
    cout << endl;
}

int main()
{
    int x = 7; // Binary: 00000111
    BinaryRepresentation(x);
    // int n, val;
    // cout << "Enter the position (n): ";
    // cin >> n;
    // cout << "Enter the value (val 0 or 1): ";
    // cin >> val;

    // int mask = 1 << n; // Create mask with 1 at position n

    // if (val == 0)
    // {
    //     // Set the nth bit to 0
    //     x = x & ~mask;
    // }
    // else
    // {
    //     // Set the nth bit to 1
    //     x = x | mask;
    // }

    // cout << "After changing the " << n << "th position, the number is now: " << x << endl;

    return 0;
}
