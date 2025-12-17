#include <iostream>
using namespace std;

int main()
{
    // Number of rows for the pyramid
    int n = 4;
    // Starting character
    char ch = 'A';

    // Outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        // Inner loop for printing characters in each row
        for (int j = 1; j <= i; j++)
        {
            cout << ch; // Print the current character
            ch++;       // Move to the next character
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // End of the program
}