// Bubble sort implementation in C++.

#include <iostream>
using namespace std;

// Function to perform bubble sort
// This function sorts an array in ascending order using the Bubble Sort algorithm.
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // Outer loop for passes
    {
        // After each pass, the largest element "bubbles up" to the end
        for (int j = 0; j < n - i - 1; j++) // Inner loop for comparisons
        {
            // If the current element is bigger than the next one, swap!
            if (arr[j] > arr[j + 1])
            {
                // Swapping values
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
// This function prints all elements of the array.
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) // Loop through the array
        cout << arr[i] << " "; // Print each element
    cout << endl; // Print a newline at the end
}

// Main function
// Entry point of the program
int main()
{
    // Initialize the array and its size
    int arr[6] = {5, 4, 1, 3, 2, 6}; // Array to be sorted
    int size = 6; // Size of the array

    // Print the array before sorting
    cout << "Before sorting: ";
    printArray(arr, size);

    // Perform bubble sort
    bubbleSort(arr, size);

    // Print the array after sorting
    cout << "After sorting:  ";
    printArray(arr, size);

    return 0; // Indicate successful program termination
}
