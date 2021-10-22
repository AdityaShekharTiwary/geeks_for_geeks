int findNumberOfTriangles(int arr[], int n)
{
    sort(arr, arr + n);
    int cnt = 0;
    for (int i = n - 1; i >= 2; i--) {
        int l = 0, r = i - 1;
        while (l < r) {
            if (arr[l] + arr[r] > arr[i]) {
                cnt += r - l;
                r--;
            }
            else l++;
        }
    }
    return cnt;
}