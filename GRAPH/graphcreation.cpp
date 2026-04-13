  #include <iostream>
  using namespace std;

  int main()
  {
int n,m;
cout<<"Enter Number Of nodes";
cin>>n;
cout<<"Enter Number of Edges";
cin>>m;
int adj[n+1][n+1]={0};
for(int i=0;i<m;i++)
{
    int u,v,w;
    cin>>u>>v>>w;
     adj[u][v]=w;
    adj[v][u]=w;
}
 for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<n+1;j++)
    {
        cout<<adj[i][j]<<" ";
    }
    cout<<" "<<endl;
  }

  }
 