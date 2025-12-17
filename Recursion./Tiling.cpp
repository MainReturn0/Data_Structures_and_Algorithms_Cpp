#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int tilingProblem(int n)
{ //? int n = 2xn size of floor. and each tile size is 2x1
    if (n == 0 || n == 1)
    {
        return 1;
        /* code */
    } // vertical filling.

    return tilingProblem(n - 1) + tilingProblem(n - 2);
}

int main()
{

    cout << "Total combination possible: " << tilingProblem(4) << endl;
    return 0;
}