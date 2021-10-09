class Solution {
public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        unordered_map<int, int> hash;
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (hash.find(arr[i]) == hash.end()) {
                hash.insert({arr[i], 0});
                res.push_back(arr[i]);
            }
            else continue;
        }
        return res;
    }
};