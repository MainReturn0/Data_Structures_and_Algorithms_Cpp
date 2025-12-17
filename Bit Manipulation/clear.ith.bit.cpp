#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int x = 0b10101010;
    int i = 1;               // Specify the bit position to clear
    cout << (x & ~(1 << i))<< endl; // Perform the operation directly in the cout statement

    // output will be 168, = 10101000. 

    return 0;
}