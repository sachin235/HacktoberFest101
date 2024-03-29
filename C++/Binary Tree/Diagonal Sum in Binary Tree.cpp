#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int data)
{
    struct Node *Node =
        (struct Node *)malloc(sizeof(struct Node));

    Node->data = data;
    Node->left = Node->right = NULL;

    return Node;
}

// root - root of the binary tree
// vd - vertical distance diagonally
// diagonalSum - map to store Diagonal
// Sum(Passed by Reference)
void diagonalSumUtil(struct Node *root,
                     int vd, map<int, int> &diagonalSum)
{
    if (!root)
        return;

    diagonalSum[vd] += root->data;

    // increase the vertical distance if left child
    diagonalSumUtil(root->left, vd + 1, diagonalSum);

    // vertical distance remains same for right child
    diagonalSumUtil(root->right, vd, diagonalSum);
}

// calculate diagonal sum of given binary tree
void diagonalSum(struct Node *root)
{

    // create a map to store Diagonal Sum
    map<int, int> diagonalSum;

    diagonalSumUtil(root, 0, diagonalSum);

    map<int, int>::iterator it;
    cout << "Diagonal sum in a binary tree is - ";

    for (it = diagonalSum.begin();
         it != diagonalSum.end(); ++it)
    {
        cout << it->second << " ";
    }
}

int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(5);
    root->right = newNode(2);
    root->left->left = newNode(6);
    root->left->right = newNode(3);
    root->right->left = newNode(4);
    root->right->right = newNode(2);
    root->right->left->right = newNode(5);
    root->right->left->left = newNode(4);
    root->left->right->left = newNode(9);
    root->left->left->right = newNode(1);

    diagonalSum(root);

    return 0;
}
