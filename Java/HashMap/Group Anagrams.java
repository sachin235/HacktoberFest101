/*
[LeetCode #49] Group Anagrams 

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Example 2:

Input: strs = [""]
Output: [[""]]

Example 3:

Input: strs = ["a"]
Output: [["a"]]
 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.
*/

class Solution {    
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string> > map;
        unordered_map<string, vector<string> >:: iterator it;
        
        for (int i = 0;i < strs.size();i++){
            string sorted_string = strs[i];
            sort(sorted_string.begin(), sorted_string.end());
            if (map.empty())
                map[sorted_string].push_back(strs[i]);
            else{
                if (map.find(sorted_string) == map.end())
                    map[sorted_string].push_back(strs[i]);
                else
                {
                    it = map.find(sorted_string);
                    it->second.push_back(strs[i]);
                }
            }
        }
        vector<vector<string> > ans;
        for (it = map.begin(); it!= map.end();it++)
            ans.push_back(it->second);
        return ans;
    }
};
