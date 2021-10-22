#include<bits/stdc++.h>
using namespace std;

int fibRec(int n)
{
    if(n==0 || n==1)
        return n;
    return fibRec(n-1)+fibRec(n-2);
}

int fibTopDown(int n, int * dp)
{
    if(n==0 || n==1)
    {
        dp[n] = n;
        return dp[n];
    }
    if(dp[n]!=-1)
        return dp[n];
    else
    {
        dp[n] = fibTopDown(n-1, dp) + fibTopDown(n-2, dp);
        return dp[n];
    }
}

int fibBottomUp(int n)
{
    int * dp = new int [n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main()
{
    int n;
    cout<<"Enter the number->";
    cin>>n;
    cout<<fibRec(n)<<endl;
    int * dp = new int[n+1];
    for(int i=0; i<=n; i++)
        dp[i]=-1;
    cout<<fibTopDown(n, dp)<<endl;
    cout<<fibBottomUp(n)<<endl;
    return 0;
}
