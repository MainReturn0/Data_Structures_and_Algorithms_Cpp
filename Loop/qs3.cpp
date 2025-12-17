#include <iostream>

using namespace std;

int main()
{
    int n = 10829; // Initial value to reverse
    int res = 0;   // Result starts at 0 and will store the reversed number

    while (n > 0) // Loop until n becomes 0
    {
        int lastdigit = n % 10;     // Extract the last digit of n
        res = res * 10 + lastdigit; // Build the reversed number
        n = n / 10;                 // Remove the last digit from n
    }

    cout << "Reversed number: " << res << endl; // Output the reversed number

    return 0;
}