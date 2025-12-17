#include <iostream>

using namespace std;

int main()
{
    int n;  // Declaring the variable 'n' to store user input.

    do  // Using a do-while loop. This ensures the loop executes at least once before checking the condition.
    {
        cout << "Enter your number = ";
        cin >> n;  // Taking user input and storing it in 'n'.

        if (n % 10 == 0)   // If the input is divisible by 10 (remainder is 0), exit the loop.
        {
            cout << "Your input is divisible by 10." << endl;  // Inform the user before exiting.
            break;
        }

        cout << "You entered " << n << endl;  // Display the entered number.
    } while (true);  // Infinite loop until the condition to break is met.

    cout << endl;  // Print a blank line for better output formatting.

    return 0;  // Indicate successful program termination.
}