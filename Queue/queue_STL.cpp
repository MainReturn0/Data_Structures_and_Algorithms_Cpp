#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{

    queue<int> Jubayer;

    Jubayer.push(1);
    Jubayer.push(10);
    Jubayer.push(100);
    Jubayer.push(1000);
    Jubayer.push(10000);

    while (!Jubayer.empty())
    {
        cout << Jubayer.front() << endl; // we can only access front element as FIFO
        Jubayer.pop();                     // if we dont pop it it will be a infinite loop.
    }

    return 0;
}