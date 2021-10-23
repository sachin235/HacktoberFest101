#include<bits/stdc++.h>
using namespace std;

int ways(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    int ans = ways(n-1)+ways(n-2);
    return ans;
}

int waysTopDown(int n, int * dp)
{
    if(n<0)
        return 0;
    if(n==0)
    {
        dp[n]=1;
        return dp[n];
    }
    if(dp[n]!=-1)
        return dp[n];
    else
    {
        dp[n] = waysTopDown(n-1, dp) + waysTopDown(n-2, dp);
    }
    return dp[n];
}

int waysBottomUp(int n)
{
    int * dp = new int [n+1];
    dp[0]=1;

    for(int i=1; i<=n; i++)
    {
        dp[i]=0;
        for(int j=1; j<=2; j++)
        {
            if(i-j>=0)
                dp[i] += dp[i-j];
        }
    }
    return dp[n];
}

int main()
{
    int n;
    cout<<"Enter the number of stairs->";
    cin>>n;
    cout<<ways(n)<<endl;
    int * dp = new int [n+1];
    for(int i=0; i<=n; i++)
        dp[i]=-1;
    cout<<waysTopDown(n, dp)<<endl;
    cout<<waysBottomUp(n)<<endl;
    return 0;
}
