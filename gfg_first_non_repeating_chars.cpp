class Solution {
public:
	string FirstNonRepeating(string A) {
		vector<int> vis(26, 0);
		vector<char> v;

		string ans = "";
		int n = A.size();

		for (int i = 0; i < n; i++) {
			if (!vis[A[i] - 'a']) {
				v.push_back(A[i]);
			}
			vis[A[i] - 'a']++;
			int m = v.size();
			bool f = false;

			for (int j = 0; j < m; j++) {
				if (vis[v[j] - 'a'] == 1) {
					ans.push_back(v[j]);
					f = true;
					break;
				}
			}
			if (!f) ans.push_back('#');
		}
		return ans;
	}

};