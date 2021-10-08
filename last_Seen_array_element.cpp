class Solution {
public:
    int lastSeenElement(int arr[], int n)
    {
        map<int, int> hash;
        for (int i = 0; i < n; i++) hash[arr[i]] = i;
        int ans = 0, curr = INT_MAX;
        for (auto it : hash) {
            if (it.second < curr) {
                curr = it.second;
                ans = it.first;
            }
        }
        return ans;
    }

};