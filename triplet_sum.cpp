class Solution {
public:
    //Function to find if there exists a triplet in the
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int x)
    {
        sort(arr, arr + n);
        for (int i = 0; i < n; i++) {
            int l = i + 1, r = n - 1;
            while (l < r) {
                if (arr[i] + arr[l] + arr[r] == x) return true;
                else if (arr[i] + arr[l] + arr[r] < x) l++;
                else r--;
            }
        }
        return false;
    }

};