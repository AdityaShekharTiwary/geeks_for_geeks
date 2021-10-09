class Solution {
public:
    int sortingCost(int n, int arr[]) {
        map<int, int> hash;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (hash.find(arr[i] - 1) != hash.end()) {
                hash[arr[i]] = hash[arr[i] - 1] + 1;
            }
            else {
                hash[arr[i]] = 1;
            }
            ans = max(ans, hash[arr[i]]);
        }
        return n - ans;
    }
};