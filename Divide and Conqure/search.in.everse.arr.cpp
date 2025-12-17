#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int getinreversearr(vector<int> &arr, int target) // we are passing arr by ref & (double && act as an AND opt) so we can access out arr directly, that saves time and memory.

{

    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        //? calculating the mid.
        int mid = start + (end - start) / 2;

        //! Cheking if mid == target.
        if (arr[mid] == target)
            return mid;

        // if not, will check the left is sorted.

        if (arr[start] <= arr[mid])
        { // if sorted, then will try to find the target from that range.
            if (arr[start] <= target && target < arr[mid])
            {
                end = mid - 1; // if target is here will minimize the arr by sorting end. then we will back to our mid calculation with new end. else move to next step.
            }
            else
            {
                start = mid + 1; // if sorted but not in left side, simply make our start as the first index of right, and will jump to calculate our new mid.  mid will be the first index of right side.
            }
        }
        else
        {
            //? If the left half is NOT sorted, the right half must be sorted.
            //? Now we check if the target lies within the sorted right half.

            if (arr[mid] < target && target <= arr[end])
            {
                //? If the target is greater than the mid element and less than or equal to the end element,
                //? it means the target is in the sorted right half.
                //? So, we move the `start` pointer to `mid + 1` to search in the right half.
                start = mid + 1;
            }
            else
            {
                //? If the target is NOT in the sorted right half, it must be in the left half.
                //? So, we move the `end` pointer to `mid - 1` to search in the left half.
                end = mid - 1; // Key is not in the right half, back to the left half.
            }
        }
    }

    return -1;  // target not found. 
}

int main()
{

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int target;
    cout << "Hey dude, Welcome to Search in a sorted reverse array. The size of the arr is " << arr.size() << " to get the index number put your value from 0 to 7: ";
    cin >> target;
    cout << "I got your key man. Your index is: " << getinreversearr(arr, target) << "." << endl;

    return 0;
}