long long countTriplets(long long arr[], int n, long long sum)
{
	sort(arr, arr + n);
	int cnt = 0;
	for (int i = 0; i < n - 2; i++) {
		int l = i + 1, r = n - 1;
		while (l < r) {
			if (arr[i] + arr[l] + arr[r] < sum) {
				cnt += r - l;
				l++;
			}
			else r--;
		}
	}
	return cnt;
}
