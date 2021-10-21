class Solution
{
public:
    //Function to find list of all words possible by pressing given numbers.

    vector<string> keys = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;

    void solve(int arr[], int n, string curr, int idx) {
        if (idx == n) {
            res.push_back(curr);
            return;
        }
        string letter = keys[arr[idx]];
        for (int i = 0; i < letter.size(); i++) {
            solve(arr, n, curr + letter[i], idx + 1);
        }
    }

    vector<string> possibleWords(int arr[], int n)
    {
        res.clear();
        solve(arr, n, "", 0);
        return res;
    }
};