#include <iostream>
#include <vector>
using namespace std;

// Function to find two indices in the array whose values sum up to the target
vector<int> pairsum(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1; // Initialize two pointers: start and end
    int currentSum = 0;                  // Variable to store the sum of elements at start and end
    vector<int> ans;                     // Vector to store the result indices. Create a dynamic array named ans. It will store integers(int)

        // Loop until the two pointers meet
        while (start < end)
    {
        currentSum = arr[start] + arr[end]; // Calculate the sum of elements at start and end
        if (currentSum == target)           // If the sum matches the target
        {
            ans.push_back(start);           // Add the start index to the result
            ans.push_back(end);             // Add the end index to the result
            return ans;                     // Return the result
        }
        else if (currentSum < target)       // If the sum is less than the target
        {
            start++;                        // Move the start pointer forward
        }
        else                                // If the sum is greater than the target
        {
            end--;                          // Move the end pointer backward
        }
    }
    return ans;                             // Return an empty vector if no pair is found
}

int main()
{
    // Initialize the vector of numbers
    vector<int> numbers = {2, 7, 11, 15};
    int target; // Variable to store the target value

    // Prompt the user to enter a target value
    cout << "Enter a target value from the numbers {";
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i]; // Print each number in the vector
        if (i < numbers.size() - 1)
            cout << ", "; // Add a comma between numbers
    }
    cout << "}: ";

    cin >> target; // Read the target value from the user

    // Call the pairsum function to find the indices
    vector<int> ans = pairsum(numbers, target);

    // Check if a pair was found
    if (!ans.empty())
    {
        // Print the indices of the pair
        cout << "Your target key indices are: " << ans[0] << " , " << ans[1] << endl;
    }
    else
    {
        // Print a message if no pair was found
        cout << "No pair found for that target.\n";
    }

    return 0; // Exit the program
}