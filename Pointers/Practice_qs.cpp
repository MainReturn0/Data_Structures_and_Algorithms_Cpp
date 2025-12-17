#include <iostream>
using namespace std;

int main()
{

    int a = 5, y = 10;
    int *ptr1 = &a, *ptr2 = &y;
    ptr2 = ptr1;
    cout << ptr2 << "\n";
    cout << ptr1 << "\n";
    cout << &a << "\n";

    return 0;
}