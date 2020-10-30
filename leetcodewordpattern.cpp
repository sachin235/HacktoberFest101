class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
         vector<string>v;
         string temp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                v.push_back(temp);
                temp.clear();
            }
            else
            temp.push_back(s[i]);

        }
         v.push_back(temp);

        if(pattern.length()!=v.size())
            return false;
        int n=pattern.length();
        map<char,string> mp;
        map<string,int> mp2;
        for(auto x:v)
            mp2[x]++;

        for(int i=0;i<n;i++)
        {
            if(mp.find(pattern[i])!=mp.end())
            {
                if(mp[pattern[i]]!=v[i])
                    return false;
            }
            mp[pattern[i]]=v[i];
        }

        return mp.size()==mp2.size();
    }

};
