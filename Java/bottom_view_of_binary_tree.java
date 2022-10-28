import java.util.Queue;
import java.util.TreeMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Map.Entry;
// class to create a node
class Node {
    int data;
    Node left, right;
    public Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}
class NodeObj            // Each Object holds the current node to add in Queue
{
            Node node;
            int hd;     // Horizontal Distance of each Node
            NodeObj(Node node, int hd)
            {
                this.node = node;
                this.hd = hd;
            }
    
}
// class of binary tree
public class Tree
{
    Node root;
    
    // method to print the Bottom View of the binary tree
    void bottomView(Node root)
    {
        if (root == null)
        return;   // There will be no Bottom View of a tree having root null
        
        Queue<NodeObj> queue = new LinkedList<NodeObj>();
        // Declare Map to maintain hd and node data.
        Map<Integer,Integer> bottomView = new TreeMap<>();
        // We first add the root into the queue along with it's hd 0.
        queue.add(new NodeObj(root, 0));
        
        // Standard level order traversal using Queue
        while (!queue.isEmpty())
        {
            NodeObj curr = queue.poll();  // we dequeue the current NodeObj
            Node tempNode=curr.node;     // get the current node to process.
            int hd=curr.hd;             // get the node's respective horizontal distance.
            
            // Every time we find a node having same horizontal distance
            // we either replace the data in the map or add a new key hd.
            
            bottomView.put(hd,tempNode.data);
            
            // Now add the left and right child of each node
            // to continue level order traversal
            
            if (tempNode.left != null)
            {
                // hd of left child = hd of parent node - 1.
                queue.add(new NodeObj(tempNode.left, hd - 1));
            }
            
            if (tempNode.right != null)
            {
                // hd of right child = hd of parent node + 1.
                queue.add(new NodeObj(tempNode.right, hd + 1));
            }
        }
        // We just print the values corresponding to each key(hd) or the nodes present in Bottom view
        // This is the code to iterate over Map Values.
        for (Entry<Integer, Integer> entry : bottomView.entrySet())
        {
            System.out.print(entry.getValue()+" ");
        }
    }
    
    // Driver Code or Main method to test above functions
    public static void main(String[] args)
    {
      
        Tree tree = new Tree();
        tree.root = new Node(20);
        tree.root.left = new Node(10);
        tree.root.left.left = new Node(5);
        tree.root.left.right = new Node(15);
        tree.root.right = new Node(30);
        tree.root.right.left = new Node(25);
        tree.root.right.right = new Node(35);
        
        System.out.println("The Bottom View of Binary Tree is: ");
        System.out.println();
        
        tree.bottomView(tree.root);
    }
    
}