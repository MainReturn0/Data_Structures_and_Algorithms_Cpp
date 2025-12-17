#include <iostream>
using namespace std;

// Binary search: A way to find something in a sorted list quickly

// Function to do the binary search
int binarySearch(int arr[], int n, int key)
{
    int start = 0; // Start from the first element
    int end = n - 1; // End at the last element

    // Keep looking until the start and end meet
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Find the middle of the list
        if (arr[mid] == key) // If the middle element is what we are looking for
        {
            return mid; // Return the position of the key
        }
        else if (arr[mid] < key) // If the key is bigger than the middle element. 
        {
            start = mid + 1; // Move the start to the right of the middle. Basically second half.
        }
        else // If the key is smaller than the middle element
        {
            end = mid - 1; // Move the end to the left of the middle. first half.
        }
    }
    return -1; // If we can't find the key, return -1
}

int main()
{
    // A sorted list of numbers
    int arr[] = {1, 3, 5, 7, 9, 10, 13, 15, 20};
    int key; // The number we want to find
    int n = sizeof(arr) / sizeof(arr[0]); // How many numbers are in the list

    // Show the list to the user
    cout << "Here is the list of numbers: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print each number
    }
    cout << endl;

    // Ask the user to enter the number they want to find
    cout << "Please enter the number you want to find: ";
    cin >> key; // Get the number from the user
    cout << endl;

    // Use binary search to find the number
    int result = binarySearch(arr, n, key);  // Calling our function here.

    // If the number is found
    if (result != -1)
    {
        cout << "Great! Your number is at position " << result << " in the list." << endl;
    }
    else // If the number is not found
    {
        cout << "Sorry, your number is not in the list." << endl;
    }

    return 0; // End of the program
}