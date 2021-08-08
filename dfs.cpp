class Solution
{
public:
	//Function to return a list containing the DFS traversal of the graph.


	void solve(int node, vector<bool> &vis, vector<int> &res, vector<int> adj[]) {
		res.push_back(node);
		vis[node] = true;
		for (auto it : adj[node]) {
			if (!vis[it]) {
				solve(it, vis, res, adj);
			}
		}
	}

	vector<int>dfsOfGraph(int n, vector<int> adj[])
	{
		vector<bool> vis(n + 1, false);
		vector<int> res;
		for (int i = 0; i < n; i++) {
			if (!vis[i]) {
				solve(i, vis, res, adj);
			}
		}
		return res;
	}
};