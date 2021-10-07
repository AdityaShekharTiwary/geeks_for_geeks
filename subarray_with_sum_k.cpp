class Solution {
public:
    int findSubArraySum(int arr[], int n, int k)
    {
        unordered_map<int, int> hash;
        int curr_sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            curr_sum += arr[i];
            if (curr_sum == k) cnt++;
            if (hash.find(curr_sum - k) != hash.end()) {
                cnt += hash[curr_sum - k];
            }
            hash[curr_sum]++;
        }
        return cnt;
    }
};