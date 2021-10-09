class Solution {
public:

    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n)
    {
        map<string, int> hash;
        string name = "";
        int curr = 0;
        for (int i = 0; i < n; i++) hash[arr[i]]++;
        for (auto it : hash) {
            if (curr < it.second) {
                name = it.first;
                curr = it.second;
            }
        }
        return {name, to_string(curr)};

    }
};