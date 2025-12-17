/* 🧠 Problem: Find All Words With Given Prefix

Given a list of words, implement a function:

vector<string> getWordsWithPrefix(string prefix);

It should return all words in the Trie that start with the given prefix.*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

struct TrieNode
{
    unordered_map<char, TrieNode *> children;
    bool isEnd = false;
};

// Class for trie insertion.

class Trie
{
public:
    TrieNode *root; // making a empty node
    Trie()
    {
        root = new TrieNode();
    }

    void insertion(string word) // function to insert in a trie
    {
        TrieNode *node = root;
        for (char ch : word)
        {
            if (!node->children.count(ch))
            {
                node->children[ch] = new TrieNode();
            }

            node = node->children[ch];
        }
        node->isEnd = true;
    }
    bool startswith(string prefix)
    {
        TrieNode *node = root;
        for (char ch : prefix)
        {
            if (!node->children.count(ch))
            {
                return false;
            }
            node = node->children[ch];
        }
        return true;
    }
    void dfs(TrieNode* node, string current, vector<string>& result) {
        if (node->isEnd) result.push_back(current);
        for (auto& [ch, child] : node->children) {
            dfs(child, current + ch, result);
        }
    }

    vector<string> GetWordsWithPrefix(string prefix)
    {
        TrieNode *node = root;
        for (char ch : prefix)
        {
            if (!node->children.count(ch))
            {
                return {}; // return empty vector if prefix not found
            }
            node = node->children[ch];
        }
        vector<string> result;
        dfs(node, prefix, result);
        return result;
    }
};

int main()
{
    Trie trie;
    trie.insertion("car");
    trie.insertion("cat");
    trie.insertion("castle");
    trie.insertion("dog");

    string prefix = "ca";
    vector<string> words = trie.GetWordsWithPrefix(prefix);

    cout << "Words with prefix '" << prefix << "':\n";
    for (const string& word : words) {
        cout << word << endl;
    }

    return 0;
}