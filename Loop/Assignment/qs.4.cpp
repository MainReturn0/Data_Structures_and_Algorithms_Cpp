// wap to find all prime numbers from 2 to N by taking user input.

#include <iostream>
using namespace std;

int main()
{
    // Declare a variable N to store the number entered by the user
    int N;

    // Ask the user to enter a number (upper limit for prime checking)
    cout << "Enter a number: ";
    cin >> N;

    // Loop through numbers from 2 to N (we start from 2 because 1 is not prime)
    for (int i = 2; i <= N; i++)
    {
        bool isPrime = true; // Assume the number is prime initially

        // Check if 'i' is divisible by any number from 2 to sqrt(i)
        for (int j = 2; j * j <= i; j++)
        {
            // If 'i' is divisible by 'j', it's not a prime number
            if (i % j == 0)
            {
                isPrime = false; // Mark it as not prime
                break;           // No need to check further, as it's already confirmed as non-prime
            }
        }

        // If the number is still marked as prime, print it
        if (isPrime)
        {
            cout << i << " "; // Print the prime number
        }
    }

    // Print a newline at the end for better output formatting
    cout << endl;

    return 0; // Indicate successful program termination
}
