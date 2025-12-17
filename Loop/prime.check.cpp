#include <iostream>
#include <cmath> // Include cmath for sqrt function
using namespace std;

int main()
{
    // Initialize the number to check for primality
    int x = 9;
    bool isprime = true;

    // Loop to check divisors from 2 to sqrt(x)
    for (int i = 2; i <= sqrt(x); i++) // Check divisors up to sqrt(x)
    {
        // If x is divisible by i, it is not a prime number
        if (x % i == 0)
        {
            isprime = false;  // then our bool will be false. 
            cout << x << " is not a prime number." << endl; // Output non-prime message
            break; // Exit the loop as we found a divisor
        }
    }

    if (isprime == true)
    {
        cout << x << " is a prime number." << endl; // Improved output message
    }

    return 0;
}