// with extra space.

#include <iostream>
using namespace std;

int main()
{
    // Initialize an array
    int arr[] = {5, 4, 3, 2, 1};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(int);

    // Create a temporary array to store the reversed elements
    int temp[n];

    // Reverse the elements of the array and store them in the temporary array
    for (int i = 0; i < n; i++)
    {
        temp[n - i - 1] = arr[i]; // Copy elements in reverse order
    }

    // Print the reversed array
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " "; // Print each element followed by a space
    }

    return 0; // End of the program
}