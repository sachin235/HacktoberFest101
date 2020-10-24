#include<iostream>
#include<queue>
using namespace std;
// MADE BY SHIVAM SINGLA (@shivam7374)
class node{
public:
int data;
node* left;
node* right;
node(int data){
	this->data=data;
	left=NULL;
	right=NULL;
}
};
node* buildlevelwise()
{
  int rootdata ;
  cout << "Enter root data :" << endl ;
  cin >> rootdata ;
  if(rootdata==-1)
    {
    	return NULL ;
    }
  node* root=new node(rootdata) ;
  queue<node*> qu  ;
  qu.push(root) ;
  while(qu.size()!=0)
  {
    node* temp=qu.front() ;
    qu.pop() ;
    cout << "Enter the value of left child of : " << temp->data << " : " ;
    int data ;
    cin >> data ;
    if(data!=-1)
    {
      node* leftchild=new node(data) ;
      temp->left=leftchild ;
      qu.push(leftchild) ;
    }
    cout << "Enter the value of the right child of : " << temp->data << " : " ;
    cin >> data ;
    if(data!=-1)
    {
      node* rightchild=new node(data) ;
      temp->right=rightchild ;
      qu.push(rightchild) ;
    }
  }
  return root ;
}
void printpretree(node* root)
{
	if(root==NULL)// do not use root->data==-1 as -1 is not stored anywhere it is just for identification of null
	{
		return;
	}
	cout<<root->data<<" ";
	printpretree(root->left);
	printpretree(root->right);
	return;
}

void printintree(node* root)
{
	if(root==NULL)
	{
		return;
	}
	printintree(root->left);
	cout<<root->data<<" ";
	printintree(root->right);
	return;
}
void printposttree(node* root)
{
	if(root==NULL)
	{
		return;
	}
	printposttree(root->left);
	printposttree(root->right);
	cout<<root->data<<" ";
	return;
}
int main()
{	
	cout<<"Enter the tree with with root node then its left child and the ots right child and so on levelwise"<<endl;
	node*root=buildlevelwise();
	cout<<endl<<"The Preorder Traversal of the tree is : ";
	printpretree(root);
	cout<<endl;
	cout<<endl<<"The Inorder Traversal of the tree is : ";
	printintree(root);
	cout<<endl;
	cout<<endl<<"The Postorder Traversal of the tree is : ";
	printposttree(root);
	cout<<endl;
	return 0;
}