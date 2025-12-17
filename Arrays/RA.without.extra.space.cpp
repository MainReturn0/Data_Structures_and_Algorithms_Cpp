#include <iostream>
using namespace std;

int main()
{
    // Initialize an array
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(int);

    // Initialize two pointers: one at the start and one at the end of the array
    int start = 0, end = n - 1;    //  indirectly reference the memory locations of the array elements.

    // Reverse the array in place using a while loop
    while (start < end)
    {
        // Swap the elements at the start and end pointers
        int temp = arr[start]; // Store the value at the start pointer in a temporary variable
        arr[start] = arr[end]; // Assign the value at the end pointer to the start pointer.     arr[start]  ≡  *(arr + start).  You’re saying: “Hey C++, get me the value at memory location: arr + start”
        arr[end] = temp;       // Assign the value from the temporary variable to the end pointer

        // Move the pointers closer to the center
        start++;
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl; // Print each element of the reversed array on a new line
    }

    return 0; // End of the program
}



/*

arr          ➝  address of arr[0]
arr + 1      ➝  address of arr[1]
arr + start  ➝  address of arr[start]
*(arr + start) ➝ value at that address.       arr[start]  ≡  *(arr + start).



        Situation                   	            What arr gives you

        Just arr	➝                  The memory address of the first element (a pointer)
        arr[i] or *(arr + i)	➝      The value at index i (via pointer math)



*/