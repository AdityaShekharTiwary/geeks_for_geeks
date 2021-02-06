class Solution {
public:
	void DFS(int v, vector<bool> &visited, vector<int> g[]) {
    visited[v] = true;
    vector<int>::iterator i;
    for(i = g[v].begin(); i != g[v].end(); i++) {
        if(!visited[*i]) {
            DFS(*i, visited, g);
        }
    }

}

int findMotherVertex(int V, vector<int> g[])
{
    vector<bool> visited(V, false);

    int v = 0;

    for(int i = 0; i < V; i++) {
        if(visited[i] == false) {
            DFS(i, visited, g);
            v = i;
        }
    }


    fill(visited.begin(), visited.end(), false);

    DFS(v, visited, g);

    for(int i = 0; i < V; i++) {
        if(visited[i] == false)
            return -1;
    }

    return v;
}

};
