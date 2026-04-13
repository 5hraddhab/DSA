#include <iostream>
#include<vector>
using namespace std;
class solution
{
    private:
    void dfs(int node,int vis[],vector<int>&result,vector<int>adj[])
    {
        vis[node]=1;
        result.push_back(node);
     for(auto it:adj[node])
     {
        if(!vis[it])
        {
            dfs(it,vis,result,adj);
        }
     }
            
    }
    public:

    vector<int>dfsofgraph(int V,vector<int>adj[])
    {
        vector<int>result;
        int vis[V+1]={0};
        int node=1;
        dfs(node,vis,result,adj);
      return result;
    }

};
int main()
{
int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
   solution sol;
     
   vector<int>ans=sol.dfsofgraph( n,adj);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
}
