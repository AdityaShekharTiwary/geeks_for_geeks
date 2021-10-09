class Solution {
public:
    int isPossible(int n, int arr[], int k) {
        map<int, int> hash;
        int curr_max = INT_MIN;
        for (int i = 0; i < n; i++) hash[arr[i]]++;
        for (auto it : hash) curr_max = max(curr_max, it.second);
        return curr_max <= 2 * k ? 1 : 0;
    }
};