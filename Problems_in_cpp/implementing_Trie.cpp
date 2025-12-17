#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

struct TrieNode
{
    unordered_map<char, TrieNode *> children; // Maps character to child TrieNode
    bool isEnd = false;                       // Marks if this node completes a word
};

class Trie
{

public:
    TrieNode *root; // 🔥 This is a member variable (global to the class). exists throughout the entire class (global to class). is just a blank start — it doesn’t store a char itself.
    Trie()
    {
        root = new TrieNode(); // initializing the root node
    }
    // Now we need a function to insert a word in a trie.
    void insert(string word)
    {
        TrieNode *node = root; // starting from the root

        // Traverse each character of the word
        for (char ch : word)
        {
            // if the ch doesnt exist in the current node's children create a new node

            if (!node->children.count(ch))
            {
                node->children[ch] = new TrieNode(); // it creates a new TrieNode for that character.
            }
            // Move to the child correspponding to the ch

            node = node->children[ch]; // this line updates your current position (node) to the child node for the next character.
        }
        // after inserting all characters, mark the end of the word.
        node->isEnd = true;
    }

    bool search(string word)
    {
        TrieNode *node = root; // starting from the root.  this is a local variable.
        for (char ch : word)
        {

            if (!node->children.count(ch))
            { //? checks if the current node has a child node for the character ch
                return false;
            }
            // Move to the child node
            node = node->children[ch];
        }
        // After traversing all characters, check if it's marked as end of a word.
        return node->isEnd;
    }
    bool startsWith(string prefix)
    {
        TrieNode *node = root;

        for (char ch : prefix)
        {
            // if the prefix char isn't found, return false
            if (!node->children.count(ch))
            {
                return false;
            }
            // move to the next ch's node
            node = node->children[ch];
        }
        // if we finish traversal but its valid then
        return true;
    }
};

int main()
{

    Trie trie; // creating a new trie object.

    // insert words
    trie.insert("car");
    trie.insert("cat");
    trie.insert("castle");
    trie.insert("dog");

    // test search()

    cout << boolalpha;                                              // Print true/false instead of 1/0
    cout << "Search 'car': " << trie.search("car") << endl;         // true
    cout << "Search 'cat': " << trie.search("cat") << endl;         // true
    cout << "Search 'castle': " << trie.search("castle") << endl;   // true
    cout << "Search 'cas': " << trie.search("cas") << endl;         // false
    cout << "Search 'doge': " << trie.search("doge") << endl;       // false

    // Test startsWith()
    cout << "StartsWith 'ca': " << trie.startsWith("ca") << endl;   // true
    cout << "StartsWith 'cas': " << trie.startsWith("cas") << endl; // true
    cout << "StartsWith 'do': " << trie.startsWith("do") << endl;   // true
    cout << "StartsWith 'z': " << trie.startsWith("z") << endl;     // false

    return 0;
}