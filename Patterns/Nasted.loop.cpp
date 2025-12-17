// Nasted loop.

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    {
        int value = i;
        for (int j = 0; j < 4; j++)
        {
            cout << value << " ";
        }

        cout << endl;
    }

    return 0;
}
