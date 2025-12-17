//? Divide untill one element (all single element itself is sorted.)   and then back combine them as per their value to a temporary element. It's a recursive process, splits and then build back up.

//? Time complixity always (O(nlog n) = very stable). althrough memory needs extra space to merge.

//! we do sorting with meerge sort instead of sorting function so we can do sorting when stl is not enough.  std:: sort is not so stable as merge sort as well. Because sometimes, STL doesn’t fit. And Merge Sort always behaves.

//? Merge sort is perdictable. no worst case surprises.

//? using std:: sort [ If two elements have equal keys, their relative order may change after sorting. ]  //! But Merge sort preserves original order of equal elements.

#include <iostream>
#include <vector>
using namespace std;

// Helper function to merge two sorted subarrays
void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp; // Temporary array to store merged elements
    int i = start, j = mid + 1;

    // Merge the two halves
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements from the left half
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements from the right half
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the merged elements back into the original array
    for (int k = 0; k < temp.size(); k++)
    {
        arr[start + k] = temp[k];
    }
}

// Merge sort function
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Recursively sort the two halves
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // Merge the sorted halves
    merge(arr, start, mid, end);
}

int main()
{
    // Test case
    vector<int> arr = {5, 4, 1, 2, 3}; // Input array

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    // Call mergeSort
    mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}