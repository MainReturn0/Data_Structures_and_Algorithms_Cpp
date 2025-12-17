#include <iostream>
using namespace std;

// Function to print all subarrays
void SubArray(int arr[], int n)
{
    // Loop to set the starting point of the subarray
    for (int start = 0; start < n; start++)
    {
        // Loop to set the ending point of the subarray
        for (int end = start; end < n; end++)
        {
            // Print the indices of the current subarray
            cout << "(" << start << ", " << end << ")";
        }
        cout << endl; // Move to the next line after printing all subarrays starting from 'start'
    }
}

int main()
{
    // Initialize an array
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the total number of possible subarrays
    cout << "Possible subarrays: " << (n * (n + 1)) / 2 << endl;

    // Call the function to print all subarrays
    SubArray(arr, n);

    return 0; // End of the program
}