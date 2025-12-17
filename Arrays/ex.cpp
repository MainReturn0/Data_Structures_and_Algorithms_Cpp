#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30};

    cout << arr << endl;     // prints memory address of arr[0]
    cout << &arr[0] << endl; // same thing: address of first element. pointing address &.

    cout << arr[0] << endl;     // prints 10
    cout << *(arr + 0) << endl; // also prints 10 (pointer-style)

    return 0;
}