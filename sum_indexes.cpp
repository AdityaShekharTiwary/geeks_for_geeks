class Solution {
public:
    int pairCount(int n, int A[], int B[], int C[])
    {
        map<int, int> hash;
        for (int i = 0; i < n; i++) hash[C[i]]++;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (hash.find(A[i] - B[i]) != hash.end()) cnt++;
        }
        return cnt;
    }
};