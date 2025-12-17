#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{

    int x = 0b10101010;
    int n;
    cout << "Enter your ith position: ";
    cin >> n;

    int mask = 1 << n;

    cout << "Bit at position " << n << " is "
         << ((x & mask) ? "ON (1)" : "OFF (0)") << endl;

    cout << "The number is " << ((x % 2 == 0) ? "Even" : "Odd"); // Checks if x is divisible by 2 to determine even or odd
    return 0;
}

/*

? (x & mask)  → if the bit is ON, result ≠ 0 → condition is true

? "ON (1)" : "OFF (0)"  → classic ternary: if true → print "ON (1)", else → "OFF (0)" */