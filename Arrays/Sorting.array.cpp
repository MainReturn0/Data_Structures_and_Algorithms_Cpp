#include <iostream>
#include <algorithm> // ✅ Needed for sort()
using namespace std;

int main()
{
    int arr[] = {50, 10, 30, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Your Array is not sorted and its size is: " << n << ". Means it has " << n << " rooms." << endl;

    sort(arr, arr + n); // 🔥 Sort from arr[0] to arr[n-1]
    cout << "Now your array is sorted using sort Algorithm. Your array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
