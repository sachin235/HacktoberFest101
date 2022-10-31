/*
[LeetCode #3] Given a string s, find the length of the longest substring without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;
        
        int n = s.length(), res = INT_MIN, start = 0, end;
        unordered_map<char, int> m;
        
        for (end = 0; end < n; end++){
            if (m.find(s[end]) != m.end())
                start = max(start, m[s[end]] + 1);
            res = max(res, end-start+1);
            m[s[end]] = end;
        }
        
        return res;
    }
};
