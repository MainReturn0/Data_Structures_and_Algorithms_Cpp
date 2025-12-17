#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec1(10, -1);    // size 10 elements, and initialized with -1.      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
    cout << vec1.size() << "\n"; // getting size of the vector 1.

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;

    return 0;
}