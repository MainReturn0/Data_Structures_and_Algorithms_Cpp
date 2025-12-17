// Program to calculate the sum of odd digits in a given number.

#include <iostream>

using namespace std;

int main()
{
    int n = 12345;  // Input number
    int digsum = 0; // Initialize sum to 0

    while (n > 0) // Loop until the number becomes 0
    {
        int lastdigit = n % 10; // Extract the last digit
        if (lastdigit % 2 != 0) // Check if the digit is odd
        {
            cout << lastdigit << endl; // Print the odd digit
            digsum += lastdigit;       // Add the odd digit to the sum
        }
        n = n / 10; // Remove the last digit
    }

    cout << "sum = " << digsum << endl; // Print the sum of odd digits
    return 0;
}

// Note: % operator is used to extract the last digit by %10