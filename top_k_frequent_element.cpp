class Solution {
public:

  vector<int> topK(vector<int>& nums, int k) {
    vector<int> res;
    unordered_map<int, int> hash;
    priority_queue<pair<int, int>> pq;
    int n = nums.size();
    for (int i = 0; i < n; i++) hash[nums[i]]++;
    for (auto it : hash) pq.push({it.second, it.first});
    for (int i = 0; i < k; i++) {
      res.push_back(pq.top().second);
      pq.pop();
    }
    return res;
  }
};