class Solution {
public:
    int maxLen(int arr[], int n)
    {
        unordered_map<int, int> hash;
        int len = 0, curr = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) arr[i] = -1;
        }
        int sum = 0;
        hash[0] = -1;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (hash.find(sum) == hash.end()) hash[sum] = i;
            else {
                curr = i - hash[sum];
                len = max(len, curr);
            }
        }
        return len;
    }
};