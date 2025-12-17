#include <iostream>
#include <algorithm>
using namespace std;

// Function to print matrix in spiral order
void spiralMatrix(int mat[4][4], int n, int m)
{
    int srow = 0, scol = 0;         // Start row and column
    int erow = n - 1, ecol = m - 1; // End row and column

    // Traverse the matrix in spiral order
    while (srow <= erow && scol <= ecol)
    {
        // Traverse the top row
        for (int j = scol; j <= ecol; j++) // From start column to end column
        {
            cout << mat[srow][j] << " "; // Print elements in the top row
        }
        cout << "Printer top row"<< endl;

        // Traverse the right column
        for (int i = srow + 1; i <= erow; i++) // From the next row to the end row
        {
            cout << mat[i][ecol] << " "; // Print elements in the right column
        }
        cout << "Printer right column" << endl;

        // Traverse the bottom row (if it exists)
        if (srow < erow) // Check if there is a separate bottom row
        {
            for (int j = ecol - 1; j >= scol; j--) // From the end column to the start column
            {
                cout << mat[erow][j] << " "; // Print elements in the bottom row
            }
        }
        cout << "Printer bottom row" << endl;

        // Traverse the left column (if it exists)
        if (scol < ecol) // Check if there is a separate left column
        {
            for (int i = erow - 1; i > srow; i--) // From the end row to the start row
            {
                cout << mat[i][scol] << " "; // Print elements in the left column
            }
        }
        cout << "Printer left column" << endl;

        // Move to the next inner layer
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main()
{
    // Declare a 4x4 matrix
    int matrix[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // Call the spiralMatrix function
    spiralMatrix(matrix, 4, 4);

    return 0;
}