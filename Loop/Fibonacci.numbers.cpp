#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Ask the user to enter the number of Fibonacci terms
    cout << "Enter a number: ";
    cin >> N;

    // Initialize the first two Fibonacci numbers
    int first = 0, second = 1;

    // Print the first N Fibonacci numbers
    cout << "Fibonacci sequence: ";
    
    for (int i = 0; i < N; i++) {
        // Print the current Fibonacci number
        cout << first << " ";
        
        // Calculate the next Fibonacci number
        int next = first + second;
        
        // Update 'first' and 'second' for the next iteration
        first = second;  // Move 'first' to the next position
        second = next;   // Move 'second' to the next position
    }

    // Print a newline character at the end
    cout << endl;
    return 0;
}
