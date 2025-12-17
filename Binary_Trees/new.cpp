#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class node
{ // here class just made our own variable type, just like int or string,with 3 parts (data, left, right)
public:
    int data;
    node *left;
    node *right; // holding the address of right node.
    //? A pointer is a variable that holds the memory address of another variable.

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *BuildTree(vector<int> nodes, int &idx)
{
    idx++; // Increasing the idx value in every term.
    if (idx >= nodes.size() || nodes[idx] == -1)
    {
        return NULL;
    }

    node *currNode = new node(nodes[idx]);

    /*  here we did:

we created a new variable (currNode) of type node* (//? and the node* will hold the address as int hold the value. )
we used new to make a new node in memory with data = 5
and currNode holds the address of that new node
*/
    currNode->left = BuildTree(nodes, idx); // “Yo currNode, who’s your left child?”
    currNode->right = BuildTree(nodes, idx);
    return currNode;
}

int sum = 0;
void preorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    sum += root->data;
    preorder(root->left); // asking “Hey root, who’s your left child?”
    preorder(root->right);
}

int leftleafsum(node *root, bool isleft)
{

    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL && isleft)
    { // checking is it a leaf and also left leaf.
        return root->data;
    }
    int left = leftleafsum(root->left, true);
    int right = leftleafsum(root->right, false);
    return left + right;
}
int main()
{

    int idx = -1; // initially defining a idx value.

    vector<int> nodes = {10, 20, -1, -1, 30, 40, -1, -1, 50, -1, -1};
    node *root = BuildTree(nodes, idx);
    preorder(root);
    cout << endl;
    cout << "And the sum is: " << sum << endl;
    int leafsum = leftleafsum(root, false);
    cout << "Left leaf sum: " << leafsum << endl;

    return 0;
}