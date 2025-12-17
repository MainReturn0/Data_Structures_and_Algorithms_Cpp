#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> maxslidingwindow(vector<int> &nums, int k) //? Used vector<int>  // to hold max of each window (multiple outputs). If it were just int, that’d only hold one number (not enough).
{
    vector<int> result;                     //! result → holds final answer (max of each window)
    priority_queue<pair<int, int>> maxHeap; //! pair<int, int> → {value, index}. maxHeap → C++ STL max-heap using pairs
    // defining a pair Because: We need to know if the element is still in the current window — and value alone isn’t enough. So we can know when an element falls outside the window and discard it.
    /*/? Priority queue
    •	It stores elements in a vector
    •	Every time you push/pop, it uses heap algorithms to keep the top valid. These follow the same binary heap rule:
    •	Parent at i
    •	Left at 2i + 1
    •	Right at 2i + 2*/

    for (int i = 0; i < nums.size(); i++)
    {
        //?1. Push current elements into heap.
        maxHeap.push({nums[i], i}); // we need value and index both

        //?2. Remove elements from heap that are out of this window.
        while (!maxHeap.empty() && maxHeap.top().second <= i - k)
        {
            maxHeap.pop(); //?  If the index of the top element is outside the current window, we remove it
        }

        if (i >= k - 1)
        {
            result.push_back(maxHeap.top().first);
        }
    }
    return result;
}

int main()
{

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    maxslidingwindow(nums, k);

    return 0;
}