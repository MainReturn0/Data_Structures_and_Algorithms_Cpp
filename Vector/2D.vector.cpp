// 2D vector.

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // defined a 2D vetor. without mentioning its row and cols.
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++) //!  gives you the number of columns in row i. ✅  this tells you how many elements are in that row.
        {
           cout << matrix[i][j] << " ";
        }
        cout << endl;


    }

    return 0;
}