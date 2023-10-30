// Java program for postorder traversals

import java.util.*;

// Structure of a Binary Tree Node
class Node {
	int data;
	Node left, right;
	Node(int v)
	{
		data = v;
		left = right = null;
	}
}

class GFG {
	
	// Function to print postorder traversal
	static void printPostorder(Node node)
	{
		if (node == null)
			return;

		// First recur on left subtree
		printPostorder(node.left);

		// Then recur on right subtree
		printPostorder(node.right);

		// Now deal with the node
		System.out.print(node.data + " ");
	}

	// Driver code
	public static void main(String[] args)
	{
		Node root = new Node(1);
		root.left = new Node(2);
		root.right = new Node(3);
		root.left.left = new Node(4);
		root.left.right = new Node(5);
		root.right.right = new Node(6);

		// Function call
		System.out.println("Postorder traversal of binary tree is: ");
		printPostorder(root);
	}
}