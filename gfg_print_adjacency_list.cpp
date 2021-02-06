class Solution {
public:
	vector<vector<int>>printGraph(int V, vector<int> adj[]){
	    vector<vector<int>> res;
	    vector<int> temp;
	    for(int i=0;i<V;i++){
	        temp.push_back(i);
	        for(int x:adj[i]){
	            temp.push_back(x);
	        }
	        res.push_back(temp);
	        temp.clear();
	    }
	    return res;
	}
};
