#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the number of rows for the pattern
    int n = 4;

    // Outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++)  // doing j<= i we will get i numbers of starts on our row. 
        {
            cout << " * "; // Print a star
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Indicate successful program termination
} 