#include <iostream>
using namespace std;

int main()
{
    // Initialize an array with 5 elements
    int arr[5]; // [5] means it will create 5 slots (indices 0 to 4).

    // Calculate the length of the array
    int len = sizeof(arr) / sizeof(int); // Total size of array divided by size of one element. so we know how long we need to go.

    // Input values into the array
    for (int idx = 0; idx <= len - 1; idx++) // Loop through each index of the array till the end.
    {
        cin >> arr[idx]; // Take input for the element at index idx.
    }

    // Output the values of the array
    for (int idx = 0; idx <= len - 1; idx++) // Loop through each index of the array.
    {
        cout << arr[idx] << " "; // Print the element at index idx followed by a space.
    }
    cout << endl; // Print a newline after displaying all array elements.

    return 0; // Indicate successful program termination.
}