#include<bits/stdc++.h>
using namespace std;

int findparent(int i,int parent[])
{
    if(parent[i]==-1)
        return i;
    return parent[i]=findparent(parent[i],parent);
}
void Union(int x,int y,int parent[],int rank[])
{
    int p1=findparent(x,parent);
    int p2=findparent(y,parent);

    if(p1!=p2)
    {
      if(rank[p1]<rank[p2])
        {
            parent[p1]=p2;
            rank[p2]++;
        }
      else
        {
            parent[p2]=p1;
            rank[p1]++;
        }
    }
}
bool containcycle(vector<pair<int,int> >graph,int n,int e)
{
    int parent[n];
    int rank[n];
    for(int i=0;i<n;i++)
    {
            parent[i]=-1;
            rank[i]=1;
    }
    for(int i=0;i<e;i++)
    {
        int x=graph[i].first;
        int y=graph[i].second;
            int p1=findparent(x,parent);
            int p2=findparent(y,parent);
            if(p1==p2)
                return true;
            else
                Union(x,y,parent,rank);
    }
    return false;
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int> >graph;
    for(int i=0;i<e;i++)
    {
       int x,y;
       cin>>x>>y;
      graph.push_back({x,y});
    }

    bool ans=containcycle(graph,n,e);
    if(ans)
        cout<<"present";
    else
        cout<<"not present";

    return 0;
}
