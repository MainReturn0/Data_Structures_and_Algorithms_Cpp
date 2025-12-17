#include <iostream>
using namespace std;

int main()
{

    int x;

    cout << "Enter a number whatever you wish." << endl;
    cin >> x;

    if (x == 0)
    {
        cout << "This is a zero" << endl;
    }
    else if (x < 0)
    {
        cout << "X is Negative" << endl;
    }
else (x > 0)
    {
        cout << "x is a Positive number" << endl;
    }

    return 0;
}
