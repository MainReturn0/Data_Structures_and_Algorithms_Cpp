// we use ls and right shift becasue, //! Because it’s fast, surgical, and damn powerful when you’re dealing with binary-based problems — like masks, flags, hardware, and low-level optimization.
//!  Each left shift multiply by 2 and Rs devide by 2.
// No loops, no logic trees — just one CPU instruction.Blazing fast.

/* Let’s say you have 8 flags stored in 1 byte.
Each flag is a setting: sound, wifi, airplane mode, etc.

Now you want to check if, say, bit 4 is ON.  mask = 1 << 4;  // → 00010000


*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;




int main() {

    int x = (1 << 3) | (1 << 6);
cout << x;
    return 0;
}
