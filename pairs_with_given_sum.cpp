class Solution {
public:
    vector<pair<int, int>> allPairs(int A[], int B[], int n, int m, int x)
    {
        map<int, int> hash;
        vector<pair<int, int>> res;
        for (int i = 0; i < n; i++) {
            hash[A[i]]++;
        }
        for (int i = 0; i < m; i++) {
            if (hash.find(x - B[i]) != hash.end()) {
                res.push_back(make_pair(x - B[i], B[i]));
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};

