#include <iostream>
using namespace std;

int main()
{
    // Number of rows for the half pyramid
    int n = 4;

    // Outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; j++)
        {
            cout << j; // Print the current number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Indicate successful program termination
}