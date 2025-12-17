// Taking input in a 2D array and displaying it.

#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions

int main() // Main function where the program execution begins
{
    int rows = 3, cols = 4; // Define the number of rows and columns for the 2D array
    int matrix[3][4];       // Declare a 3x4 2D array to store integers

    // Taking input for the 2D array
    for (int i = 0; i < rows; i++) // Loop through each row
    {
        for (int j = 0; j < cols; j++) // Loop through each column in the current row
        {
            cin >> matrix[i][j]; // Take input for the element at position (i, j)
        }
    }

    // Displaying the 2D array
    for (int i = 0; i < rows; i++) // Loop through each row
    {
        for (int j = 0; j < cols; j++) // Loop through each column in the current row
        {
            cout << matrix[i][j] << " "; // Print the element at position (i, j) followed by a space
        }
        cout << endl; // Move to the next line after printing all columns of the current row
    }

    return 0; // Return 0 to indicate successful program execution
}