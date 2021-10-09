class Solution {
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        vector<int> hash(1e6 + 10, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++) hash[a[i]] = 1;
        for (int i = 0; i < m; i++) {
            if (hash[b[i]] == 1) {
                cnt++;
                hash[b[i]] = -1;
            }
        }
        return cnt;
    }
};