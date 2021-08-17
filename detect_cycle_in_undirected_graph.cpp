bool bfs(int idx, vector<bool> &vis , vector<int> adj[]) {
    queue<pair<int, int>> q;
    q.push({idx, -1});
    vis[idx] = true;
    while (!q.empty()) {
        int node = q.front().first;
        int prev = q.front().second;
        q.pop();
        for (auto it : adj[node]) {
            if (!vis[it]) {
                q.push({it, node});
                vis[it] = true;
            }
            else if (prev != it) return true;
        }
    }
    return false;
}

bool isCycle(int n, vector<int>adj[])
{
    vector<bool> vis (n, false);
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (bfs(i, vis, adj)) return true;
        }
    }
    return false;
}