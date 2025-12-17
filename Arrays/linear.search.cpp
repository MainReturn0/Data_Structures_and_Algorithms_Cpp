// search key 10 from an array using linear search.

#include <iostream>
using namespace std;

// Function to perform linear search
int linearsearch(int arr[], int n, int key)
{
    // Iterate through the array
    for (int i = 0; i < n; i++)
    {
        cout << arr << " " << i << endl;
        // Check if the current element matches the key
        if (arr[i] == key)
        {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main()
{
    // Initialize an array with 10 elements
    int arr[] = {2, 4, 6, 10, 7, 8, 9, 0, 12, 13, 15, 20}; // The key 10 is at index 8
    int n = sizeof(arr) / sizeof(int);                     // "how many elements = Total bytes / size of one element."

    // Call the linearsearch function and print the result
    cout << linearsearch(arr, n, 10) << endl; // Output should be 8

    return 0; // End of the program
}
