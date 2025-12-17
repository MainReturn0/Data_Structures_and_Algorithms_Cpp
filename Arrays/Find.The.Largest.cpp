#include <iostream>
using namespace std;

int main()
{
    // Define an array with 5 elements
    int arr[] = {5, 3, 9, 2, 8};       // Array elements are initialized with values
    int n = sizeof(arr) / sizeof(int); // Calculate the number of elements in the array
    int max = arr[0];                  // Initialize max with the first element of the array

    // Loop through the array starting from the second element. i =1, Why not index 0? Because max is already set to the first element (arr[0]), so we skip it. i is the index of the current element in the array that you're checking.


    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) // Check if the current element is greater than max. We're using i as an index to access elements of the array.
        {
            max = arr[i]; // Update max with the current element
        }
    }

    // Output the largest value in the array
    cout << "Largest value = " << max << endl;

    return 0; // Indicate successful program termination
}


// So the variable i becomes the index at that exact moment—because you're using it inside square brackets ([]), which is how arrays are accessed.