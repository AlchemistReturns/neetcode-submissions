class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> dict;
        for (int num: nums) {
            dict[num]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto& entry: dict) {
            pq.push({entry.second, entry.first});
        }

        vector<int> ans;
        for (int i = 0; i< k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};
