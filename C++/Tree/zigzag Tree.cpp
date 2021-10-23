class Solution{
    public:
//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
    vector <int> res;
    
    //if root is null, we return the list.
	if (!root)return res;
	
	//declaring two stacks to store the current and new level.
	stack<struct Node*> currentlevel;
	stack<struct Node*> nextlevel;
	
	//pushing the root in currentlevel stack.
	currentlevel.push(root);
	bool lefttoright = true;
	
	while (!currentlevel.empty())
	{
	    //storing the top element of currentlevel stack in temp and popping it.
		Node* temp = currentlevel.top();
		currentlevel.pop();
		
		//if temp is not null, we store the data at temp in list.
		if (temp) 
		{
			res.push_back (temp->data);
			
			//if lefttoright is true then it stores nodes from left to right 
			//else from right to left in nextlevel stack.
			if (lefttoright)
			{
				if (temp->left)
					nextlevel.push(temp->left);
				if (temp->right)
					nextlevel.push(temp->right);
			}
			else 
			{
				if (temp->right)
					nextlevel.push(temp->right);
				if (temp->left)
					nextlevel.push(temp->left);
			}
		}
		
		//if currentlevel stack is empty lefttoright is flipped to change 
		//the order of storing the nodes and both stacks are swapped.
		if (currentlevel.empty()) 
		{
			lefttoright = !lefttoright;
			swap(currentlevel, nextlevel);
		}
	}
	//returning the list.
	return res;
}
};