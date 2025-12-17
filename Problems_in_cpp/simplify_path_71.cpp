#include <iostream>
#include <vector>
#include <string>
using namespace std;

string SimplifyPath(string path)
{
    vector<string> stk;

    for (int i = 0; i < path.size(); ++i)
    {
        if (path[i] == '/') continue;

        string token = "";

        // Collect everything until next '/'
        while (i < path.size() && path[i] != '/') {
            token += path[i];
            i++;
        }
        i--; // Adjust index because loop will increment again

        // Decide what to do with token
        if (token == "." || token == "") {
            continue; // current directory or empty — ignore
        }
        else if (token == "..") {
            if (!stk.empty()) {
                stk.pop_back(); // go back one folder
            }
        }
        else {
            stk.push_back(token); // valid folder name
        }
    }

    // Now build final result
    string result = "/";
    for (int i = 0; i < stk.size(); ++i) {
        result += stk[i];
        if (i != stk.size() - 1) {
            result += "/";
        }
    }

    // Edge case: if result is empty, return root "/"
    if (result.empty()) return "/";

    return result;
}

int main()
{
    string path;
    cout << "Enter a Unix path: ";
    getline(cin, path);

    cout << "Simplified path: " << SimplifyPath(path) << endl;

    return 0;
}