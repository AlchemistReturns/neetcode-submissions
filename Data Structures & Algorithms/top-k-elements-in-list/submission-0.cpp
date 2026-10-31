class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> dict;
        for (int num: nums) {
            dict[num]++;
        }

        vector<pair<int, int>> pairs(dict.begin(), dict.end());
        sort(pairs.begin(), pairs.end(), [](const auto& a, auto& b) {
            return a.second > b.second;
        });

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(pairs[i].first);
        }
        return ans;
    }
};
