#include <iostream>
using namespace std;

void changeA(int a)
{
    a = 20;
    cout << a << "\n";
}


// pass by pointers.



int main()
{

    int a = 10;

    changeA(a);        // Calling the function. and the function prints 20. then next line.
    cout << a << "\n"; // gets output 10.

    return 0;
}