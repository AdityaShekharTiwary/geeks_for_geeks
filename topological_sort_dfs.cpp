class Solution
{
public:
	//Function to return list containing vertices in Topological order.

	void dfsTopo(vector<int> adj[], vector<bool> &vis, vector<int> &res, int node) {
		vis[node] = true;
		for (auto it : adj[node]) {
			if (!vis[it]) {
				dfsTopo(adj, vis, res, it);
			}
		}
		res.push_back(node);
	}

	vector<int> topoSort(int n, vector<int> adj[])
	{
		vector<bool> vis(n, false);
		vector<int> res;
		vector<int> topo;

		for (int i = 0; i < n; i++) {
			if (!vis[i]) {
				dfsTopo(adj, vis, res, i);
			}
		}
		// while(!res.empty()){
		//     topo.push_back(res.top());
		//     res.pop();
		// }
		reverse(res.begin(), res.end());
		return res;
	}
};
