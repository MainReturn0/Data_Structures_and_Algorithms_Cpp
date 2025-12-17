#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

//?  We're passing the queue by reference, even though function arguments are passed by value by default.
void InterleaveQueue(queue<int> &q)
{
    int n = q.size(); // taking the size of the queue.

    // step 1. we have to devide the queue in two parts and first part would be a new queue.

    queue<int> q2;
    for (int i = 0; i < n / 2; i++)
    {
        q2.push(q.front());
        q.pop();
    }

    // step 2. interleave both queus back into q.

    for (int i = 0; i < n / 2; i++) {
    q.push(q2.front());
    q2.pop();

    q.push(q.front());
    q.pop();
}

}

int main()
{

    queue<int> q;
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    InterleaveQueue(q);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop(); // or an infinite loop.
    }

    return 0;
}