class Solution {
public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        unordered_map<int, int> hash;
        int l = 0, r = 0;
        vector<int> res;
        while (r < n) {
            if (r - l != k - 1) {
                hash[arr[r]]++;
            }
            if (r - l == k - 1) {
                hash[arr[r]]++;
                res.push_back(hash.size());
                hash[arr[l]]--;
                if (hash[arr[l]] <= 0) hash.erase(arr[l]);
                l++;
            }
            r++;
        }
        return res;
    }
};