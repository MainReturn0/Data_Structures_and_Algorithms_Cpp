#include <iostream>
using namespace std;

void changeA(int *ptr)
{
    *ptr = 20;
    cout << *ptr << "\n";
}

int main()
{

    int a = 10; //
    int &b = a;   // here we have same memory address.
    b = 25;  // Changing the value of 'a' through reference 'b'

    // after this both has the same value in a single address. we also didnt call our function. 

    cout << b << "\n";
    cout << a << "\n";

    return 0;
}