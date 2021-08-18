// BFS traversal approach

bool cycleBFS(int idx, vector<bool> &vis , vector<int> adj[]) {
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

// DFS traversal approach

bool cycleDFS(int node, int parent, vector<bool> &vis, vector<int> adj[]) {
    vis[node] = true;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (cycleDFS(it, node, vis, adj)) return true;
        }
        else if (it != parent) return true;
    }
    return false;
}

// Main function to call DFS or BFS

bool isCycle(int n, vector<int>adj[])
{
    vector<bool> vis (n, false);
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (cycleDFS(i, -1, vis, adj)) return true;
            // if (cycleBFS(i, vis, adj)) return true;
        }
    }
    return false;
}