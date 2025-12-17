//? Count how many unique ways these friends can pair or stay single. N numbers of friends. But nobody can be in more than one pair. No threesomes. No pair switching. Strict rules.

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int friendsPairing(int n)
{
    if (n == 1 || n == 2)
        return n;
    //? first single friend  f(n-1).   and      (n-1)*(n-2)   rest two is pairing,
    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}

int main()
{
    cout << friendsPairing(4) << endl;
    return 0;
}

/*  //? You’ve got n friends. Focus on just one — say, Friend #1.

Case -1:   If Friend #1 is alone:
            •	You now have to arrange the remaining n - 1 friends out of n friends as #1 has deecided to stay single.
            •	That’s exactly f(n - 1) ways.

Case -2: 	Friend #1 has (n - 1) choices for who to pair with.

❓ Why (n - 1) * f(n - 2) and not just f(n - 2)?

Here’s the idea in a single line:

You’re counting how many ways Friend #1 can pair with someone, and then how many ways to arrange the rest.
*/