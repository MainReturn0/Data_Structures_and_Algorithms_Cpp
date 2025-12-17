#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
// We call it //! Mask

// But you don't want to write the mask `y` every time, just use a left shift or right shift.

int main()
{

    int mask = 1 << 3; // Takes the number 1 and puts it in the 3rd position, starting from 0.
                       //! Here all bits are 0 except the 3rd bit.

    int x = 10101100, y = mask;

    // Here `y` is a bit mask that checks if only one element is 1 or 0.

    int result = x & y; //! This is masking, it makes all elements 0 by the end operation.

    cout << result;

    return 0;
}