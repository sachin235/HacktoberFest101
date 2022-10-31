#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i){    
    if(i > s.size()/2){
       return true ;
    }
    return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;
}

int main() {
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    string message = isPalindrome(str, 0) ? "The entered string is a palindrome" : "The entered string is not a palindrome";
    cout<<message;
    return 0;
}
