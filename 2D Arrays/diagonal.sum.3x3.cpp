#include <iostream>
#include <algorithm>
using namespace std;

int diagonalSum(int mat[][3], int n)
{
    int sum1 = 0; // primary diagonal sum
    int sum2 = 0; // secondary diagonal sum

    for (int i = 0; i < n; i++) // loop through rows
    {
        sum1 += mat[i][i];         // Primary diagonal: i == j
        sum2 += mat[i][n - i - 1]; // Secondary diagonal: j = n - i - 1
    }

    int total = sum1 + sum2;

    // Avoid double-counting the center element if n is odd
    if (n % 2 == 1) // n % 2 == 1 → checks if n is odd.
    {
        total -= mat[n / 2][n / 2];
    }

    return total;
}

int main()
{
    int matrix[][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    cout << diagonalSum(matrix, 3);
    return 0;
}