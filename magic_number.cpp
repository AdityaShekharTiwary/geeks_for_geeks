int countTriplets(vector<int>arr) {
	int n = arr.size();
	vector<int> hash(n, 0);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) hash[i]++;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) cnt += hash[j];
		}
	}
	return cnt;
}