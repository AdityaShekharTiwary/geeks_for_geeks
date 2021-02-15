void dfs(int s, vector<int> g[], bool vis[])
{
    vis[s]=true;
    cout<<s<<" ";
    for(auto x:g[s])
    {
        if(!vis[x])
        {
            dfs(x,g,vis);
        }
    }
    // Your code here
}