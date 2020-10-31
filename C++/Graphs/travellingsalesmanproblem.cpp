#include<bits/stdc++.h>
using namespace std;
int n=4;

int dist[10][10]={{0,20,42,25},{20,0,30,34},{42,30,0,10},{25,34,10,0}};
int dp[100][100];

int visitedall=(1<<n)-1;

int tsp(int mask,int pos)
{
    if(mask==visitedall)
        return dist[pos][0];

        if(dp[mask][pos]!=-1)
            return dp[mask][pos];

    int finans=INT_MAX;

    for(int city=0;city<n;city++)
    {
        if((mask&(1<<city))==0)
        {
            int ans=dist[pos][city]+tsp(mask|(1<<city),city);

            finans=min(finans,ans);
        }

    }

    return dp[mask][pos]=finans;
}

int main()
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
            dp[i][j]=-1;
    }
    cout<<tsp(1,0);
    return 0;
}
