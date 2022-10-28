/*
Evaluate Reverse Polish Notation (Leetcode #150)

Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

Note that division between two integers should truncate toward zero.

It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

 

Example 1:

Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9
Example 2:

Input: tokens = ["4","13","5","/","+"]
Output: 6
Explanation: (4 + (13 / 5)) = 6
Example 3:

Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
Output: 22
Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
 

Constraints:

1 <= tokens.length <= 104
tokens[i] is either an operator: "+", "-", "*", or "/", or an integer in the range [-200, 200].

*/

class Solution {
	/** Function to return the result of an expression */
    public int evaluateValue(int op1, int op2, String op) {
        switch(op) {
            case "+":
            return op1 + op2;
            case "-":
            return op1 - op2;
            case "*":
            return op1 * op2;
            case "/":
            return op1 / op2;
            default:
            return -1; 
        }
    }

    /** Function to find if a string represents a numeric value */
    public boolean isNumericValue(String s) {
        for (int i = 0;i < s.length();i++) {
            if ((s.charAt(i) < '0' || s.charAt(i) > '9') && !((s.length() != 1)  && (s.charAt(i) == '-')))
            return false;
        }
        return true;
    }
    
    /** Function to evaluate the value of an arithmetic expression in Reverse Polish Notation */
    public int evalRPN(String[] tokens) {
        Stack<Integer> s = new Stack<> ();
        for (int i = 0;i < tokens.length;i++) {
            if (isNumericValue(tokens[i])) {
                s.push(Integer.parseInt(tokens[i]));
            }
            else {
                if (s.size() != 0) {
                    int op2 = s.pop();
                    int op1 = s.pop();
                    String op = tokens[i];
                    s.push(evaluateValue(op1, op2, op));
                }
            }
        }
        return s.pop();
    }
}