#include <iostream>
using namespace std;

int clearRange(int num, int i, int j)
{
    // Step 1: Create a mask with 1's outside the range [i, j]

    //! 8 bit number e.g num = 15, 15 = 00001111.   we need a number to deal with this 4 0, 3 1s, 1 1s.   we make left all 1 so we get the same value as original by the and opt.
    int left = ~0 << (j + 1); // Left part: 1's before bit j

    //? we make lsb as 1 by moving one bit to ith position, then make the ith bit free by doing -1.
    int right = (1 << i) - 1; // Right part: 1's after bit i

    //! we combine them by using or opt. cause only 1 gives a 1 in or opt.

    int mask = left | right; // Combine both parts to create the mask

    //? Finally, we do our AND opt to get the value.
    // Step 2: Apply the mask to the number using bitwise AND
    return num & mask;
}

int main()
{
    int num, i, j;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the starting position (i): ";
    cin >> i;
    cout << "Enter the ending position (j): ";
    cin >> j;

    int result = clearRange(num, i, j);
    cout << "After clearing bits from " << i << " to " << j << ", the number is: " << result << endl;

    return 0;
}
