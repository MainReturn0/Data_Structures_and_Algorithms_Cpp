#include <iostream>
#include <algorithm>
using namespace std;

int diagonalSum(int mat[][4], int n)
{
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += mat[i][i];
        sum2 += mat[i][n - i - 1];
    }
    int sum = sum1 + sum2;
    return sum;
}

int main()
{

    int matrix[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    cout << diagonalSum(matrix, 4);
    return 0;
}