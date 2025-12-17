#include <iostream>
using namespace std;

int main()
{
    // Initialize an array with 5 elements
    int arr[5] = {7, 5, 3, 2, 1};  //[5] means it will create rooms from 0-4.

    // Calculate the length of the array
    int len = sizeof(arr) / sizeof(int); // Total size of array divided by size of one element

    // Loop through the array and print each element
    for (int idx = 0; idx <= len - 1; idx++) // idx ranges from 0 to len-1
    {
        cout << arr[idx] << " "; // Print the element at index idx
    }
    cout << endl; // Print a newline after the array elements

    return 0; // Indicate successful program termination
}