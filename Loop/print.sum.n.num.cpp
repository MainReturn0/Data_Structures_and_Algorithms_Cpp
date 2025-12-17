#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Put your number: " << endl;
    cin >> num;

    int sum = 0;
    for (int n = 0; n <= num; n++)
    {
        sum += n; // adding i in sum. also we could write sum = sum+n
    }

    cout << "Sum: " << sum << endl; // printing sum, after the loop is done.
    return 0;
}