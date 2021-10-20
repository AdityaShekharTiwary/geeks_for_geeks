class Solution {
public:

	bool compare(int a[], int b[]) {
		for (int i = 0; i < 26; i++) {
			if (a[i] != b[i]) return false;
		}
		return true;
	}

	int search(string pat, string txt) {
		int n = txt.size();
		int m = pat.size();

		int hashp[26] = {0}, hasht[26] = {0};
		for (int i = 0; i < m; i++) {
			hashp[pat[i] - 'a']++;
			hasht[txt[i] - 'a']++;
		}
		int cnt = 0;
		for (int i = m; i < n; i++) {
			if (compare(hashp, hasht)) cnt++;
			hasht[txt[i] - 'a']++;
			hasht[txt[i - m] - 'a']--;
		}
		if (compare(hashp, hasht)) cnt++;
		return cnt;
	}

};