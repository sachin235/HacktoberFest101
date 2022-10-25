/*
Solution : Tortoise-Hare-Approach

Unlike the above approach, we don’t have to maintain node count here and we will be able to find the middle node in a single traversal 
so this approach is more efficient.

Intuition: In the Tortoise-Hare approach, we increment slow ptr by 1 and fast ptr by 2, so if take a close look fast ptr will travel 
double than that of the slow pointer. So when the fast ptr will be at the end of Linked List, slow ptr would have covered half of 
Linked List till then. So slow ptr will be pointing towards the middle of Linked List.

Approach: 

1. Create two pointers slow and fast and initialize them to a head pointer.
2. Move slow ptr by one step and simultaneously fast ptr by two steps until fast ptr is NULL or next of fast ptr is NULL.
3. When the above condition is met, we can see that the slow ptr is pointing towards the middle of Linked List and hence we can return the slow pointer.
*/

class Main {
     public static class Node{
        int data;
        Node next;
        
        public Node(int data){
            this(data, null);
        }
        
        public Node(int data, Node next){
            this.data = data;
            this.next = next;
        }
    }
    
    public static void display(Node head){
    
        System.out.println("Printing LinkedList");
        while(head != null){
            System.out.print(head.data + " -> ");
            head = head.next;
        }
        
        System.out.println("Null");
    }
    
    public static void main(String[] args) {
        
        Node node5 = new Node(60, null);
        Node node4 = new Node(50, node5);
        Node node3 = new Node(40, node4);
        Node node2 = new Node(30, node3);
        Node node1 = new Node(20, node2);
        
        Node head = new Node(10, node1);
        
        display(head);
        
        System.out.println(Mid(head));
        
    }
    
    public static int Mid(Node head){
        Node slow = head;
        Node fast = head;
        
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        
        return slow.data;
    }
}

