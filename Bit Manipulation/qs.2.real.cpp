#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int SingleNumber(vector<int> num, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ num[i];
    }
    cout << ans << endl;
    return ans;
}

int main()
{

    vector<int> num = {2, 4, 6, 8, 9, 8, 6, 4, 2};
    int size = num.size();
    SingleNumber(num, size);
    return 0;
}