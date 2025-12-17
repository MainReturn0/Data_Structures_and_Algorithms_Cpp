//? Doesn't need a temp memory. unstable than merge sort, it can resuffle as like std:: sort. 

//!  “Everyone smaller to the left, everyone bigger to the right. I’ll sort those two sides next.”

int searchRotatedSortedArray(vector<int> &arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;

        // Left half is sorted
        if (arr[left] <= arr[mid]) {   // we will hit else only the if condition fails, so by doing left = mid +1 we will reach to else condition.
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1; // target in left sorted half
            } else {
                left = mid + 1; // target in right half
            }
        }

        // before else condition we will get a new mid, 
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1; // target in right sorted half
            } else {
                right = mid - 1; // target in left half
            }
        }
    }

    return -1; // not found
}
