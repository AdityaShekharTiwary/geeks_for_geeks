stack<int>s;
void help(vector<int> adj[],bool vis[],int p)
{
    vis[p]=true;
    int i;
    for(i=0;i<adj[p].size();i++)
    if(vis[adj[p][i]]==false)
       help(adj,vis,adj[p][i]);
       s.push(p);
}
vector<int> topoSort(int v, vector<int> adj[]) 
{
   
      bool vis[v+1];
      memset(vis,0,sizeof(vis));
      int i;
      for(i=0;i<v;i++)
     if(vis[i]==false)
     {
         help(adj,vis,i);
     }
     vector<int>ans;
     while(!s.empty())
     {
       //  cout<<s.top()<<" ";
         ans.push_back(s.top());
         s.pop();
     }
    // cout<<endl;
     return ans;
}
