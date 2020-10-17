Check sum of Covered and Uncovered nodes of Binary Tree

Given a binary tree, you need to check whether sum of all covered elements is equal to sum of all uncovered elements or not.
In a binary tree, a node is called Uncovered if it appears either on left boundary or right boundary. Rest of the nodes are called covered.




#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

int sum(struct node* node)
{
    if(node==NULL)
        return 0;
    return node->data +sum(node->left)+sum(node->right);
}

int uleft(struct node* node)
{
    if(node->left==NULL && node->right==NULL)
        return node->data;
    
    if(node->left!=NULL)
        return node->data+uleft(node->left);
    if(node->right!=NULL)
        return node->data+uleft(node->right);
}

int uright(struct node* node)
{
    if(node->left==NULL && node->right==NULL)
        return node->data;
    if(node->right!=NULL)
        return node->data+uright(node->right);
    if(node->left!=NULL)
        return node->data+uright(node->left);
}
int main() 
{
    struct node *root = newNode(10); 
    root->left     = newNode(8); 
    root->right = newNode(2); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->right = newNode(2);
    
    int t=sum(root);
    int un=uleft(root)+uright(root);
    
    if(un==(t-un))
        cout<<"True";
    else
        cout<<"false";
    
    
	return 0;
}
