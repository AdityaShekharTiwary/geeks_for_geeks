class Solution
{
public:
    int transform (string a, string b)
    {
        map<char, int> hash;
        for (auto it : a) hash[it]++;
        for (auto it : b) hash[it]--;
        for (auto it : hash) {
            if (it.second != 0)
                return -1;
        }
        int n = a.size();
        int ans = 0, i = n - 1, j = n - 1;
        while (i >= 0 && j >= 0) {
            while (i >= 0 && a[i] != b[j]) {
                i--;
                ans++;
            }
            if (i >= 0) {
                i--;
                j--;
            }
        }
        return ans;
    }
};