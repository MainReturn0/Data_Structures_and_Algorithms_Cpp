#include <iostream>
using namespace std;

// Function to update every element of the array
void update(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += 10; // Add 10 to each element
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // Array with 5 elements
    int n = sizeof(arr) / sizeof(int); // Calculate size of array

    update(arr, n); // 🔥 Call the update function here

    // Print the updated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
