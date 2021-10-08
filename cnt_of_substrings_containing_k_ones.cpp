class Solution {
public:

    long long int countOfSubstringWithKOnes(string s, int k) {
        long long int res = 0;
        int prefix = 0;
        unordered_map<int, int> hash;
        hash[0] = 1;
        for (int i = 0; i < s.size(); i++) {
            prefix += s[i] - '0';
            if (prefix >= k) {
                res += hash[prefix - k];
            }
            hash[prefix]++;
        }
        // for(auto it:hash) cout<<it.first<<" "<<it.second<<endl;
        return res;
    }
};