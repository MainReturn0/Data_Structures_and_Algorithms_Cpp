/* 🌧️ Trapping Rain Water – The Concept
Imagine a histogram where the width of each bar is 1 unit and the height of each bar is given in an array.

Now imagine it rains on this structure. Water gets trapped between the bars — but only if there are taller bars on both the left and right sides. */

#include <iostream> // Include the iostream library for input and output
using namespace std;

int TrappedWater(int height[], int width)
{
    int leftMax[width];  // Array to store the maximum height of bars to the left of each bar (including itself)
    int rightMax[width]; // Array to store the maximum height of bars to the right of each bar (including itself)
    int minHeight;       // Variable to store the minimum of leftMax and rightMax for each bar
    int water = 0;       // Variable to store the total amount of trapped water

    // Calculate the tallest bar on the left of each bar (including itself)
    leftMax[0] = height[0];         // At index 0, the leftmost bar, there's nothing to the left, so it's the maximum
    for (int i = 1; i < width; i++) // Start from index 1 as leftMax[0] is already initialized
    {
        leftMax[i] = max(leftMax[i - 1], height[i]); // Compare the current bar with the maximum bar seen so far
        cout << *leftMax;
    }
    cout << endl;

    // Calculate the tallest bar on the right of each bar (including itself)
    rightMax[width - 1] = height[width - 1]; // At the last index, the rightmost bar, there's nothing to the right, so it's the maximum
    for (int i = width - 2; i >= 0; i--)     // Start from the second last index and move left
    {
        rightMax[i] = max(rightMax[i + 1], height[i]); // Compare the current bar with the maximum bar seen so far
        cout << *rightMax;                             // deref to get the value, or we will get the hexa address.
    }
    cout << endl;

    // Calculate the trapped water for each bar
    for (int i = 0; i < width; i++)
    {

        minHeight = min(leftMax[i], rightMax[i]); // Find the minimum of the tallest bars on the left and right
        cout << leftMax[i] << ", " << rightMax[i] << endl;
        cout << minHeight << endl;
        if (minHeight > height[i])          // If the minimum height is greater than the current bar's height
            water += minHeight - height[i]; // Add the difference to the total trapped water
        cout << "Here hright: " << height[i] << endl;
        cout << "Water: " << water << endl;
    }

    return water; // Return the total trapped water
}

int main()
{
    int height[] = {4, 2, 0, 3, 2, 5};        // Array representing the heights of the bars
    int width = sizeof(height) / sizeof(int); // Calculate the number of bars (columns)

    int result = TrappedWater(height, width);                        // Call the function to calculate trapped water
    cout << "Total trapped water = " << result << " units," << endl; // Output the result
    return 0;                                                        // Return 0 to indicate successful execution
}