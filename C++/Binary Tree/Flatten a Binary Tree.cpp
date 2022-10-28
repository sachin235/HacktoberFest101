// C++ Program to flatten a given Binary Tree into linked
// list
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

Node *newNode(int key)
{
    Node *node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return (node);
}

void flatten(struct Node *root)
{
    // base condition- return if root is NULL or if it is a
    // leaf node
    if (root == NULL || root->left == NULL && root->right == NULL)
        return;
    // if root->left exists then we have to make it
    // root->right
    if (root->left != NULL)
    {
        flatten(root->left);
        // store the node root->right
        struct Node *tmpRight = root->right;
        root->right = root->left;
        root->left = NULL;
        // find the position to insert the stored value
        struct Node *t = root->right;
        while (t->right != NULL)
            t = t->right;
        // insert the stored value
        t->right = tmpRight;
    }
    flatten(root->right);
}

void inorder(struct Node *root)
{
    // base condition
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->right = newNode(6);
    flatten(root);
    cout << "The Inorder traversal after flattening binary tree ";
    inorder(root);
    return 0;
}
