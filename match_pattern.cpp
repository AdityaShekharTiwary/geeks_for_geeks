string encoding(string str) {
    unordered_map<char, int> mp;
    string res = "";

    for (auto x : str) {
        if (mp.find(x) != mp.end()) {
            mp[x]++;
        }
        res += to_string(mp[x]);
    }
    return res;
}

vector<string> findMatchedWords(vector<string> dict, string pattern)
{
    vector<string>res;
    string ans = encoding(pattern);
    for (auto x : dict) {
        if (pattern.length() == x.size() && encoding(x) == ans) {
            res.push_back(x);
        }
    }

    return res;
}