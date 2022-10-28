#include<bits/stdc++.h>
using namespace std;

int knapsack(int wts[], int prices[], int n, int w)
{
    if(n==0 || w==0)
        return 0;
    int inc = 0;
    int exc = 0;
    if(w-wts[n-1]>=0)
        inc = prices[n-1] + knapsack(wts, prices, n-1, w-wts[n-1]);
    exc = 0+knapsack(wts, prices, n-1, w);
    return max(inc, exc);
}

int knapsackBottomUp(int wts[], int prices[], int n, int w)
{
    int dp[n+1][w+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=w; j++)
        {
            if(i==0 || j==0)
                dp[i][j] = 0;
            else
            {
                int inc = 0;
                int exc = 0;
                if(j-wts[i-1]>=0)
                    inc = prices[i-1] + dp[i-1][j-wts[i-1]];
                exc = 0 + dp[i-1][j];
                dp[i][j] = max(inc, exc);
            }
        }
    }
    return dp[n][w];
}

int knapsackTopDown(int wts[], int prices[], int n, int w, int **dp)
{
    if(n==0 || w==0)
    {
        dp[n][w] = 0;
        return dp[n][w];
    }

    if(dp[n][w]!=-1)
        return dp[n][w];
    else
    {
        int inc = 0;
        int exc = 0;
        if(w-wts[n-1]>=0)
            inc = prices[n-1] + knapsackTopDown(wts, prices, n-1, w-wts[n-1], dp);
        exc = 0 + knapsackTopDown(wts, prices, n-1, w, dp);
        dp[n][w] = max(inc, exc);
        return dp[n][w];
    }
}

int main()
{
    int wts[6] = {2,2,3,1,4,5};
    int prices[6] = {5,20,20,10,15,30};
    int k;
    cout<<"Enter the weight of the bag->";
    cin>>k;
    int ** dp = new int* [7];
    for(int i=0; i<7; i++)
    {
        dp[i] = new int [k+1];
        for(int j=0; j<=k; j++)
            dp[i][j] = -1;
    }
    cout<<knapsackBottomUp(wts, prices, 6, k)<<endl;
    cout<<knapsackTopDown(wts, prices, 6, k, dp)<<endl;
    cout<<knapsack(wts, prices, 6, k)<<endl;
    return 0;
}
