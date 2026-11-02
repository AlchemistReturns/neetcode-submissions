class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        vector<int> starts;
        int ans=0;
        unordered_set<int> hash;
        for (int x: nums) hash.insert(x);
        for (int x: nums) {
            if (hash.count(x-1)) continue;
            starts.push_back(x);
        }

        for (int x: starts) {
            int i=1;
            while(hash.count(x+i)) {
                i++;
            }
            ans = max(ans, i);
        }

        return ans;
    }
};
