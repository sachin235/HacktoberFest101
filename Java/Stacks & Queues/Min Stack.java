/*
Min Stack (Leetcode #155)

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
 

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 

Constraints:

-231 <= val <= 231 - 1
Methods pop, top and getMin operations will always be called on non-empty stacks.
At most 3 * 104 calls will be made to push, pop, top, and getMin.
*/

class MinStack {
    Stack<Integer> s;
    int min;

    /** Initialize your data structure here. */
    MinStack() {
        s = new Stack <> ();
    }

	/** Push element x to the stack. */
    public void push(int x) {
        if (s.size() == 0) {
            s.push(x);
            min = x;
            return;
        }
        if (x >= min) {
            s.push(x);
        }
        else {
            s.push(x + x - min);
            min = x;
        }
    }

    /** Pop element from the stack. */
    public void pop() {
        if (s.size() == 0)
        return;
        if (s.peek() >= min)
        s.pop();
        else {
            min =  2 * min - s.pop();
        }
    }

    /** Return the top element of the stack */
    public int top() {
        if (s.size() == 0)
        return -1;
        if (s.peek() < min) 
        return min;
        return s.peek();
    }

    /** Return the minimum element in the stack */
    public int getMin() {
        if (s.size() == 0)
        return -1;
        else
        return min;
    }
}


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
