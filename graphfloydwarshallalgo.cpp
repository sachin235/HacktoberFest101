#include<bits/stdc++.h>
using namespace std;
#define inf 1000
vector<vector<int> >floydwarshall(vector<vector<int> >graph)
{
    int n=graph.size();
    int k=0;
    vector<vector<int> > dp(graph);
     // vector<vector<int> > dp(graph);
    while(k<n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
             if(i==k||j==k)
                continue;
              dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
        k++;
    }
  return dp;
}
int main()
{
    vector<vector<int> >graph={{0,inf,-2,inf},{4,0,3,inf},{inf,inf,0,2},{inf,-1,inf,0}};

    vector<vector<int > > ans=floydwarshall(graph);

    int n=ans.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<ans[i][j]<<" ";

        cout<<"\n";
    }

    return 0;
}
