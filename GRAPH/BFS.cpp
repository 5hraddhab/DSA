#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class BFS
{
public:
vector<int>bfsofgraph(int n,vector<int>adj[])
{
    queue<int>q;
  int vis[n+1]={0};
   vis[1]=1;
      q.push(1);
      vector<int>bfs;
      while(!q.empty())
      {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }

        }

      }
      return bfs;

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
    BFS bfs;
   vector<int>ans=bfs.bfsofgraph(n,adj);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
  
}