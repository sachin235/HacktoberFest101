// including libraries 
#include <bits/stdc++.h>

using namespace std;

// node 
struct node {
  int data;
  struct node * left, * right;
};

// vector for inorder traversal 
vector < int > inOrderTrav(node * curr) {
  vector < int > InOrder;
  stack < node * > s;
  while (true) {
    if (curr != NULL) {
      s.push(curr);
      curr = curr -> left;
    } else {
      if (s.empty()) break;
      curr = s.top();
      InOrder.push_back(curr -> data);
      s.pop();
      curr = curr -> right;
    }
  }
  return InOrder;
}

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

// driver code 
int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  vector < int > InOrder;
  InOrder = inOrderTrav(root);

  cout << "The InOrder Traversal is : ";
  for (int i = 0; i < InOrder.size(); i++) {
    cout << InOrder[i] << " ";
  }
  return 0;
}

