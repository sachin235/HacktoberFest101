// A C++ prgroam to contrcut all unique BSTs for keys from 1 to n
#include <bits/stdc++.h>
using namespace std;

// node structure
struct node
{
	int key;
	struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item)
{
	struct node *temp = new node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// A utility function to do preorder traversal of BST
void preorder(struct node *root)
{
	if (root != NULL)
	{
		cout << root->key << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

// function for constructing trees
vector<struct node *> constructTrees(int start, int end)
{
	vector<struct node *> list;

	/* if start > end then subtree will be empty so returning NULL
		in the list */
	if (start > end)
	{
		list.push_back(NULL);
		return list;
	}

	/* iterating through all values from start to end for constructing\
		left and right subtree recursively */
	for (int i = start; i <= end; i++)
	{
		/* constructing left subtree */
		vector<struct node *> leftSubtree = constructTrees(start, i - 1);

		/* constructing right subtree */
		vector<struct node *> rightSubtree = constructTrees(i + 1, end);

		/* now looping through all left and right subtrees and connecting
			them to ith root below */
		for (int j = 0; j < leftSubtree.size(); j++)
		{
			struct node* left = leftSubtree[j];
			for (int k = 0; k < rightSubtree.size(); k++)
			{
				struct node * right = rightSubtree[k];
				struct node * node = newNode(i);// making value i as root
				node->left = left;			 // connect left subtree
				node->right = right;		 // connect right subtree
				list.push_back(node);		 // add this tree to list
			}
		}
	}
	return list;
}

// Driver Program to test above functions
int main()
{
	// Construct all possible BSTs
	vector<struct node *> totalTreesFrom1toN = constructTrees(1, 3);


	/* Printing preorder traversal of all constructed BSTs */
	cout << "Preorder traversals of all constructed BSTs are \n";
	for (int i = 0; i < totalTreesFrom1toN.size(); i++)
	{
		preorder(totalTreesFrom1toN[i]);
		cout << endl;
	}
	return 0;
}
