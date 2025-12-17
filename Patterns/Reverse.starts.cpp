#include <iostream> // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace to avoid prefixing std::

// Main function where the program execution begins
int main()
{
    int n = 4; // Number of rows for the reverse triangular pattern

    // Outer loop to iterate through each row
    for (int i = 1; i <= n; i++)
    {
        // Inner loop to print the asterisks in each row
        // The number of asterisks decreases as the row number increases
        for (int j = 0; j <= (n - i + 1); j++)
        {
            cout << "*"; // Print an asterisk without a newline
        }
        cout << endl; // Move to the next line after printing all asterisks in the current row
    }

    return 0; // Indicate that the program executed successfully
}