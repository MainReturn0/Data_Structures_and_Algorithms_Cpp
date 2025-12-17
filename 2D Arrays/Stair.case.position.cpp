// To do a staircase method, we need a row and column wise sorted mattrix. lets find the index position as well.
/*🔧 Plan:
Change the function so it doesn’t return 1 or 0. so e.g  bool functionName ().
Instead, return a boolean (true/false)
Use reference parameters to pass back the index (i and j) when found */

#include <iostream>
#include <algorithm>
using namespace std;

// Function to search a target in a sorted matrix using Staircase Search
bool StairCase(int mat[][4], int r, int c, int target, int &row, int &col) // &row and &col are references → they will hold the position of the key if found.

{
    // Start from top-right corner
    int i = 0, j = c - 1;

    // Continue while we are within bounds
    while (i < r && j >= 0)
    {
        if (mat[i][j] == target)
        {
            row = i;
            col = j;
            return true; // Found the target
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

    return false; // Target not found
}

int main()
{
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int target;
    cout << "Enter a key to search in the matrix: ";
    cin >> target;

    int rowIndex, colIndex; // defined two names for the function.

    if (StairCase(matrix, 4, 4, target, rowIndex, colIndex))
    {
        cout << "✅ Found at index (" << rowIndex << ", " << colIndex << ")" << endl;
    }
    else
    {
        cout << "❌ Not found in the matrix." << endl;
    }

    return 0;
}
