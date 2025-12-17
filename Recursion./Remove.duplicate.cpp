#include <iostream>
#include <string>
using namespace std;

void RemoveDuplicate(string name, string ans, bool box[26], int i) //? here we are using int i to access a specific index.
{
    if (i == name.size()) // Base case: if we reach the end of the string
    {
        cout << "ans: " << ans << endl;
        return; // Exit the function
    }

    int boxidx = (int)(name[i] - 'a'); // Calculate the index for the current character

    if (box[boxidx]) // If the character is already marked as seen
    {
        RemoveDuplicate(name, ans, box, i + 1); // Skip this character
    }
    else
    {
        box[boxidx] = true;                     // Mark the character as seen
        ans += name[i];                         // Add the character to the result
        RemoveDuplicate(name, ans, box, i + 1); // Continue to the next character
    }
}

int main()
{
    string name = "apnacollege";
    string ans = "";                    // Initialize the result string
    bool box[26] = {false};             // Create an array to track seen characters
    RemoveDuplicate(name, ans, box, 0); // Start from index 0
    return 0;
}