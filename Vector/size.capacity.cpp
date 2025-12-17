// code is legit awesome for exploring how vector manages memory behind the scenes 🔥

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Size: " << vec.size() << endl;         // get the size
    cout << "Capacity: " << vec.capacity() << endl; // will get the capacity

    vec.push_back(6);                               // pushing back 6 in the end of the vector.
    cout << "Size: " << vec.size() << endl;         // get the size
    cout << "Capacity: " << vec.capacity() << endl; // will get the  doubled capacity.

    for (int i = vec.size(); i < 20; ++i)
    {
        vec.push_back(i);
        cout << "Size: " << vec.size() << endl;         // get the size
        cout << "Capacity: " << vec.capacity() << endl; // will get the  doubled capacity.
    }


    return 0;
}