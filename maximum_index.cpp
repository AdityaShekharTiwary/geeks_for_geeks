class Solution {
public:
    int maxIndexDiff(int arr[], int n) {
        if (n == 1) return 0;
        int res = INT_MIN;
        vector<pair<int, int>> pos;
        int curr_max = INT_MIN, idx = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= curr_max) {
                curr_max = arr[i];
                idx = i;
                pos.push_back({curr_max, idx});
            }
            else pos.push_back({curr_max, idx});
        }
        reverse(pos.begin(), pos.end());
        for (int i = 0; i < n; i++) {
            int k = n - 1;
            while (k != 0) {
                if (pos[k].first >= arr[i]) {
                    res = max(res, pos[k].second - i);
                    break;
                }
                else k--;
            }
        }
        return res;
    }

};