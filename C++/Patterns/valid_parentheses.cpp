// Problem Statement:
// Given a string s containing just the characters '(' , ')' , '{' , '}' , '[' and ']' , determine if the input string is valid. An input string is valid if: Open brackets must be closed by the same type of brackets. Open brackets must be closed in the correct order.


// C++ code for valid parentheses

#include <iostream>
#include <stack>

using namespace std;
bool isBalancedExp(string exp) {
   stack<char> stk;
   char x;
   for (int i=0; i<exp.length(); i++) {
      if (exp[i]=='('||exp[i]=='['||exp[i]=='{') {
         stk.push(exp[i]);
         continue;
      }
      if (stk.empty())
         return false;
      switch (exp[i]) {
      case ')':
         x = stk.top();
         stk.pop();
         if (x=='{' || x=='[')
            return false;
         break;
      case '}':
         x = stk.top();
         stk.pop();
         if (x=='(' || x=='[')
            return false;
         break;
      case ']':
         x = stk.top();
         stk.pop();
         if (x =='(' || x == '{')
            return false;
         break;
      }
   }
   return (stk.empty());
}
int main() {
   string expresion = "()[(){()}]";
   if (isBalancedExp(expresion))
      cout << "Given expresion is Balanced";
   else
      cout << "Given expresion is Not Balanced";
}