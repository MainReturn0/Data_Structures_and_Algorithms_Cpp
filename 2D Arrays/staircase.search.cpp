// To do a staircase method, we need a row and column wise sorted mattrix.

#include <iostream>
#include <algorithm>
using namespace std;

// Function to search a target in a sorted matrix using Staircase Search
int StairCase(int mat[][4], int r, int c, int target)
{
    // Start from top-right corner
    int i = 0, j = c - 1;

    // Continue while we are within bounds
    while (i < r && j >= 0)
    {
        if (mat[i][j] == target)
        {
            return 1; // Found the target
        }
        else if (mat[i][j] > target)
        {
            j--; // Move left to smaller elements
        }
        else
        {
            i++; // Move down to bigger elements
        }
    }

    return 0; // Target not found
}

int main()
{
    // Predefined 4x4 sorted matrix (row-wise and column-wise)
    int matrix[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int target;

    cout << "Please enter a key to search in the matrix: ";
    cin >> target;

    // Call the search function.
    // You're not checking the function itself — you're checking what it returns.
    
    if (StairCase(matrix, 4, 4, target)) //"Call the StairCase() function — if it returns a value that is true (like 1), go inside the if block. Otherwise, go to the else block."
    {
        cout << "✅ " << target << " was found in the matrix!" << endl;
    }
    else
    {
        cout << "❌ " << target << " was NOT found in the matrix." << endl;
    }

    return 0;
}
