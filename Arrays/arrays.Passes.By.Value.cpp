// Demonstrating how arrays are passed by pointer (reference-like behavior) in C++.

#include <iostream>
using namespace std;

// Function to update the first element of the array
void update(int arr[])
{
    arr[0] = 1000; // Modifying the 0th index value of the array to 1000. Cause arr allows us to modify a variable writen in main but outside of the main. 
}

int main()
{
    // Declare and initialize an array
    int arr[] = {1, 2, 3, 4, 5};            // Initially, the 0th index value is 1.
    
    // Call the update function and pass the array
    update(arr);                            // The array is passed by pointer, so changes affect the original array.
    
    // Print the updated value of the 0th index
    cout << "arr [0] = " << arr[0] << endl; // Output will be 1000 because the update function modified the array.

    return 0;
}