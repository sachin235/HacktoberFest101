#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int i, int j)
{
    if(i==0 || j==0)
        return 0;
    if(s1[i-1]==s2[j-1])
        return 1+lcs(s1, s2, i-1, j-1);
    return max(lcs(s1, s2, i-1, j), lcs(s1, s2, i, j-1));
}

int lcsBottomUp(string s1, string s2, int l1, int l2)
{
    int dp[l1+1][l2+2];
    for(int i=0; i<=l1; i++)
    {
        for(int j=0; j<=l2; j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[l1][l2];
}

int lcsTopDown(string s1, string s2, int i, int j, int** dp)
{
    if(i==0 || j==0)
    {
        dp[i][j]=0;
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    else
    {
        if(s1[i-1]==s2[j-1])
            dp[i][j] = 1+lcs(s1, s2, i-1, j-1);
        else
            dp[i][j] = max(lcs(s1, s2, i-1, j), lcs(s1, s2, i, j-1));
        return dp[i][j];
    }
}

int main()
{
    string s1, s2;
    cout<<"Enter first string->";
    cin>>s1;
    cout<<"Enter second string->";
    cin>>s2;

    int i = s1.length();
    int j = s2.length();

    int **dp = new int * [i+1];
    for(int a=0; a<=i; a++)
    {
        dp[a] = new int [j+1];
        for(int b=0; b<=j; b++)
            dp[a][b] = -1;
    }

    cout<<lcsTopDown(s1, s2, i, j, dp)<<endl;
    cout<<lcsBottomUp(s1, s2, i, j)<<endl;
    cout<<lcs(s1, s2, i, j)<<endl;

    return 0;
}
