// Selection sort implementation in C++

#include <iostream>
using namespace std;

// Function to perform selection sort
// This function sorts an array in ascending order using the Selection Sort algorithm.
void selectionSort(int arr[], int n)
{
    // Outer loop to iterate through each element of the array
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i; // Assume the current position i holds the smallest value
        cout << "Now the Min Index is: " << arr[minIdx] << endl;

        // Inner loop to find the smallest element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) 
        {
            // Check if the current element is smaller than the current minimum
            if (arr[j] < arr[minIdx])
            {
                cout << " First the arr[j] is: " << arr[j] << endl;
                cout << " and the Min Index is: " << arr[minIdx] << endl;
                minIdx = j; // Update the index of the smallest element
                cout << " and Now the Min Index is: " << minIdx << endl;
            }
        }

        // Swap the smallest element found with the element at position i
        swap(arr[i], arr[minIdx]);
    }
}

// Main function
// Entry point of the program
int main()
{
    // Initialize the array and its size
    int arr[5] = {5, 4, 1, 3, 2}; // Array to be sorted

    // Perform selection sort
    selectionSort(arr, 5);

    return 0; // Indicate successful program termination
}