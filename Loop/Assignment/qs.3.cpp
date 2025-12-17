// checking Armstrong number.

#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std::.

int main()
{
    int num; // Declare an integer variable to store the input number.

    cout << "To check your number, put a number: "; // Prompt the user to input a number.
    cin >> num; // Take the input number from the user.

    int sum = 0; // Initialize a variable to store the sum of cubes of digits.

    while (num > 0) // Loop until the number becomes 0.
    {
        int lastdigit = num % 10; // Extract the last digit of the number.
        cout << lastdigit << endl; // Print the last digit for debugging purposes.
        sum += (lastdigit * lastdigit * lastdigit); // Add the cube of the last digit to the sum.
        num = num / 10; // Remove the last digit from the number by integer division.
    }

    cout << "sum: " << sum << endl; // Print the final sum of cubes of digits.

    return 0; // Return 0 to indicate successful program termination.
}