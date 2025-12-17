#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace

// Function to calculate the maximum profit from buying and selling stocks
int maxProfit(int prices[], int n)
{
    // Initialize variables
    int minPrice = prices[0]; // Minimum price encountered so far, initialized to the first price
    int bestbuy = 0;          // Index of the best day to buy
    int bestsell = 0;         // Index of the best day to sell
    int profit = 0;           // Current profit
    int maxProfit = 0;        // Maximum profit achieved so far

    // Iterate through the array of prices starting from the second day
    for (int i = 1; i < n; i++)
    {
        // Check if the current price is lower than the minimum price encountered so far
        if (prices[i] < minPrice)
        {
            // Update the minimum price and the best day to buy
            minPrice = prices[i];
            bestbuy = i; // Store the index of the best day to buy
            cout << "Today we can buy a stock at price " << prices[i] << ". " << endl;
        }
        else
        {
            // If the current price is not lower, calculate the profit for selling on this day
            cout << "\nToday is not a day to buy, it's a day to sell perhaps. ";
            profit = prices[i] - minPrice; // Calculate the profit
            cout << "Profit from selling is: " << profit;
            cout << ". We got this profit today but it's not the Max profit day." << endl;

            // Check if the current profit is greater than the maximum profit so far
            if (profit > maxProfit)
            {
                // Update the maximum profit and the best day to sell
                maxProfit = profit;
                bestsell = i; // Store the index of the best day to sell
                cout << "\nWe got profit " << maxProfit << " today and it's the Max profit day till now" << endl;
            }
        }
    }

    // Output the best day to buy and sell along with their respective prices
    cout << "Buy on day: " << bestbuy << " (Price: " << prices[bestbuy] << ")" << endl;
    cout << "Sell on day: " << bestsell << " (Price: " << prices[bestsell] << ")" << endl;

    // Return the maximum profit
    return maxProfit;
}

int main()
{
    // Array of stock prices for each day
    int prices[] = {7, 1, 5, 8, 6, 4};    // Example array of stock prices
    int n = sizeof(prices) / sizeof(int); // Calculate the number of days

    // Call the maxProfit function and display the result
    maxProfit(prices, n); // Call the function with the prices array and its size
    return 0;             // Return 0 to indicate successful execution
}