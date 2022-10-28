/*
Valid Parentheses (Leetcode #20)

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/

class Solution {
	/** Function to check if 2 characters form a valid set of parantheses */
    public boolean matchParantheses(char a, char b) {
        if ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'))
            return true;
        return false;
    }
    
    /** Function to find if an input string is valid or not */
    public boolean isValid(String s) {
        Stack<Character> st = new Stack <> ();
        for (int i = 0;i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else if (c == ')' || c == '}' || c == ']') {
                if (st.size() == 0) return false;
                char top = st.peek();
                if (matchParantheses(top, c)) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        if (st.size() != 0)
            return false;
        return true;
    }
}
