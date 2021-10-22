Description :
You are given a queue. Your aim is to reverse that queue.

NOTE : Here a QUEUE is reversed using STACK.
Input Format :
1️⃣ The first line of input is an integer n denoting the size of the queue. 
2️⃣ The next line contains n space separated integers.
  
Output Format :
The output should be reverse of the input queue.

Example: if the queue contains [9, 6, 8, 2, 5] then you have to make some changes to the queue such that after 
making the required changes the queue should look like [5, 2, 8, 6, 9].
  
Sample Input:
6
8 1 9 2 5 3
Sample Output:
[3, 5, 2, 9, 1, 8]

SOLUTION : 

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

class Source {
    static Queue<Integer> q = new LinkedList<Integer>();
    static Stack<Integer> s = new Stack<>();

    public static void func() {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            s.push(q.remove());
        }
        for (int i = 0; i < size; i++) {
            q.add(s.pop());
        }
    }

    public static void main(String arg[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        for (int j = 0; j < n; j++) {
            q.add(in.nextInt());
        }
        func();
        System.out.println(q);
    }
}

