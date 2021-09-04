vector<int> shortestPath(vector<int> adj, int n, int src) {
	vector<int> dis(n, 1e9);
	dis[src] = 0;
	queue<int> q;
	q.push_back(src);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (auto it : adj[node]) {
			if (dis[node] + 1 < dis[it]) {
				dis[it] = dis[node] + 1;
				q.push(it);
			}
		}
	}
	for (auto it : dis) cout << it << " ";
}