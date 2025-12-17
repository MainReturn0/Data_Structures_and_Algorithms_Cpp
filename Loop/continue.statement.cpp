// This program demonstrates the use of the 'continue' statement in a loop.
// The loop iterates from 0 to 9, but skips the number 3.

#include <iostream>

using namespace std;

int main()
{
    // Loop from 0 to 9
    for (int i = 0; i < 10; i++)
    {
        // Skip the iteration when i equals 3
        if (i == 3)
        {
            continue; // Control jumps to the next iteration of the loop
        }
        // Print the current value of i
        cout << i << endl;
    }

    return 0; // Indicate successful program termination
}