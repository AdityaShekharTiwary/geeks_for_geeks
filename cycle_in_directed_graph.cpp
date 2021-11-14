class Solution {
public:
    // Function to detect cycle in a directed graph.

    bool dfs(vector<int> adj[], vector<bool> &vis, vector<bool> &dfsvis, int node) {
        vis[node] = true;
        dfsvis[node] = true;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (dfs(adj, vis, dfsvis, it)) return true;
            }
            else if (dfsvis[it]) return true;
        }
        dfsvis[node] = false;
        return false;
    }

    bool isCyclic(int n, vector<int> adj[]) {
        vector<bool> vis(n, 0), dfsvis(n, 0);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(adj, vis, dfsvis, i)) return true;
            }
        }
        return false;
    }
};

