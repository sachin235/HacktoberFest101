/*
[LeetCode #5] Longest Palindromic Substring

Given a string s, return the longest palindromic substring in s.

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.
*/
  
class Solution {
public:
    int PalindromicSubstringLength(string s, int low, int high){
        if (s.empty() || low > high)
            return 0;
        while ((low >= 0) && (high < s.length()) && (s[low] == s[high])){
            low--;
            high++;
        }
        return (high - low - 1);
    }
    
public:    
    string longestPalindrome(string s) {
        if (s.empty() || s.length() < 1) 
            return "";
        int result = INT_MIN;
        int lowIndex, highIndex;
        for (int i = 0; i< s.length();i++){
            int l1 = PalindromicSubstringLength(s, i, i);
            int l2 = PalindromicSubstringLength(s, i, i+1);
            if (l1 > l2 && result < l1){
                result = l1;
                lowIndex = i - (l1/2);
                highIndex = i + (l1/2);
            }
            else if (l1 < l2 && result < l2){
                result = l2;
                lowIndex = i - (l2/2) + 1;
                highIndex = i + (l2/2);
            }
        }
        string resultantPalindrome = s.substr(lowIndex, highIndex-lowIndex+1);
        return resultantPalindrome;
    }
};
