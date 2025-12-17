// From an array of numbers (positive, negative, or both), find the maximum sum of any contiguous subarray using Kadane's Algorithm.

#include <iostream>
using namespace std;

// Function to find the maximum sum of any contiguous subarray
void SubArraySum(int arr[], int n)
{
    // Initialize the current sum and maximum sum with the first element of the array
    int CurrSum = arr[0];
    int MaxSum = arr[0];

    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++)
    {
        // Update the current sum:
        // Either start a new subarray with arr[i] or extend the current subarray
        CurrSum = max(arr[i], CurrSum + arr[i]);

        // Update the maximum sum if the current sum is greater
        MaxSum = max(MaxSum, CurrSum);
    }

    // Print the maximum sum of any contiguous subarray
    cout << "Possible subarray sum: " << MaxSum << endl;
}

int main()
{
    // Initialize an array with positive and negative numbers
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find and print the maximum subarray sum
    SubArraySum(arr, n);

    return 0; // End of the program
}