#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int data; // holding the data
    node *left;
    node *right; // will hold the pointer of next node.

    node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr; // initially they are empty.
    }
};

// static int idx = -1; // initially its -1, and later we will increase the idx value in recursive call, as we defined it as a static.

// Have to build a recursive function to make the tree.
node *buildTree(vector<int> nodes, int &idx)
{
    idx++;
    if (nodes[idx] == -1)
        return nullptr;

    node *currNode = new node(nodes[idx]);  // dynamically creating a new node using the constructor.

    currNode->left = buildTree(nodes, idx);  // we will belive we our call will create its left first and store the value. 
    currNode->right = buildTree(nodes, idx);

    return currNode;
}
// have to traverse the tree and print it.
 
void preorder(node *root)   // Use * when You may pass nullptr. References(&) can’t be null.
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);  // make the left as root. 
    preorder(root->right);
}

int main()
{
    int idx = -1;
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildTree(nodes, idx); // creating a root pointer and passing the value of nodes to the function and calling it back.
    preorder(root);
    cout << endl;
    return 0;
}