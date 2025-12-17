// insertion sort

#include <iostream>
using namespace std;

// Function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Insertion Sort function
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // We start from i = 1 because the first element is already “sorted” by default.
    {
        int curr = arr[i]; // Store current value
        int prev = i - 1;

        // Shift all greater elements to the right
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev]; // Shift right
            prev--;  // to stop loop. cause in first iteration prev = 0 (i =1, so 1-1 =0.)
        }

        // Insert current value at the correct position
        arr[prev + 1] = curr;
    }

    // Print the sorted array
    printArray(arr, n);
}

// Main function
int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    int n = 5;

    cout << "Original array: ";
    printArray(arr, n);

    cout << "Sorted array: ";
    insertionSort(arr, n);

    return 0;
}
