#diagonal sum in a binary tree in java
import java.util.*;
class Node
{
    int data;
    Node left,right;
    Node(int d)
    {
        data=d;
        left=right=null;
    }
}
class BinaryTree
{
    Node root;
    int sum=0;
    void diagonalSum(Node root)
    {
        if(root==null)
        return;
        Queue<Node> q=new LinkedList<Node>();
        q.add(root);
        q.add(null);
        while(q.size()>1)
        {
            Node temp=q.peek();
            q.remove();
            if(temp==null)
            {
                q.add(null);
                System.out.println(sum);
                sum=0;
            }
            else
            {
                while(temp!=null)
                {
                    sum+=temp.data;
                    if(temp.left!=null)
                    q.add(temp.left);
                    temp=temp.right;
                }
            }
        }
    }
    public static void main(String args[])
    {
        BinaryTree tree=new BinaryTree();
        tree.root=new Node(8);
        tree.root.left=new Node(3);
        tree.root.right=new Node(10);
        tree.root.left.left=new Node(1);
        tree.root.left.right=new Node(6);
        tree.root.right.right=new Node(14);
        tree.root.right.right.left=new Node(13);
        tree.root.left.right.left=new Node(4);
        tree.root.left.right.right=new Node(7);
        tree.diagonalSum(tree.root);
    }
}

//Output:

//8
//19
//42
//37
