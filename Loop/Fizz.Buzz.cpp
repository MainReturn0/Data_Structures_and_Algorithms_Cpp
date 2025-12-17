#include <iostream>
using namespace std;

int main()
{
    // Initialize the number up to which the FizzBuzz logic will run
    int num = 30;

    // Uncomment the following lines to take user input for the number if you want.
    // cout << "Hello Jubayer. Your are now writing a code. For the Fizz and Buzz of 3x and 5x, Please give me a number: ";
    // cin >> num;

    // Initialize counters for fizz (multiples of 3) and buzz (multiples of 5). as we know we will get fizz and buzz after again and again a certain number.
    int fizz = 0, buzz = 0;

    // Loop from 1 to num-1
    for (int idx = 1; idx < num; idx++)       // here we initialized out num variable. that means we are starting from 1 to 30 for our num variable. 
    {
        fizz++; // Increment fizz counter
        buzz++; // Increment buzz counter

        // Check if both fizz and buzz counters have reached their respective limits
        if (fizz == 3 && buzz == 5)
        {
            cout << " Fizz & Buzz "; // Print "Fizz & Buzz" for multiples of both 3 and 5
            fizz = 0; // Reset fizz counter
            buzz = 0; // Reset buzz counter
        }
        // Check if only fizz counter has reached its limit
        else if (fizz == 3)
        {
            cout << " Fizz "; // Print "Fizz" for multiples of 3
            fizz = 0; // Reset fizz counter
        }
        // Check if only buzz counter has reached its limit
        else if (buzz == 5)
        {
            cout << " Buzz "; // Print "Buzz" for multiples of 5
            buzz = 0; // Reset buzz counter
        }
        // If neither fizz nor buzz counters have reached their limits
        else
        {
            cout << idx << " "; // Print the current number
        }
    }

    return 0; // End of program
}