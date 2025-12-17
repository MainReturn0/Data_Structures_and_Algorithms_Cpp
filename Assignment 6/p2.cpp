// is it a leap year?

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Please enter a year" << endl;
    cin >> x;

    if (x % 4 == 0)
    {
        cout << "This is a leap year" << endl;
    }
    else
    {
        cout << "This is not a leap year" << endl;
    }
}