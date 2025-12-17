#include <iostream>
using namespace std;

// Function to print all elements of the array
void printarr(int nums[], int n)
{
    for (int i = 0; i < n; i++) // Iterate through the array
    {
        nums[i] += 10;
        cout << nums[i] << ","; // Print each element followed by a comma
    }
    cout << endl; // Move to the next line after printing all elements
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};       // Initialize an array with 5 elements
    int n = sizeof(arr) / sizeof(int); // Calculate the number of elements in the array

    // Print the total size of the array in bytes and the number of elements
    cout << "Total array size (in bytes) & number of elements = " << sizeof(arr) << " & " << n << endl;

    // Call the function to print the array elements
    printarr(arr, n);

    return 0; // End of the program
}