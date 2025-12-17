#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
        cout << v.size() << endl;
        cout << v.capacity() << endl;
    }

    return 0;
}