#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Put a number: " << endl;
    cin >> n;

    int sum = 0;  // Initialize sum

    for (int i = 1; i <= n; i++)  // Start from 1, go up to n
    {
        
        sum += i;
    }

    cout << "sum: " << sum << endl;

    return 0;
}