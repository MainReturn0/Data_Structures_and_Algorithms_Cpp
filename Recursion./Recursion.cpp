//! You give a number like 1234 and the function will return 1+2+3+4 = 10. using recursion.

//? Get the last digit using n%10.      And the rest is n/10.       Then you can make a sum box and add them in every step.     base case n ==0 when our function will give control to main..

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int getTheSum(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + getTheSum(n / 10); // recursion.  //? Here we are getting n/10 = x and then recursion takes us to the next position.
}

int main()
{
    cout << "Total: " << getTheSum(1234) << endl;
    return 0;
}