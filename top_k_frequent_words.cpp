class Solution {
public:

    static bool comp(pair<string, int> f1, pair<string, int>f2) {
        if (f1.second == f2.second) {
            return f1.first < f2.first;
        }
        return f1.second > f2.second;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> hash;
        for (auto it : words) hash[it]++;
        vector<pair<string, int>> count (hash.begin(), hash.end());
        sort(count.begin(), count.end(), comp);
        vector<string> res;
        for (auto it : count) {
            if (k == 0) break;
            res.push_back(it.first);
            k--;
        }
        return res;
    }
};