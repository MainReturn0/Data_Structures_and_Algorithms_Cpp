// lets do it using the sum formula directly.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Put a number: " << endl;
    cin >> n;

    int sum = ((n*(n + 1)) / 2);
    cout << "Your sum: " << sum << endl;

    return 0;
}