class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for (int i = 0; i < nums.size()-2; i++) {
            int target = -1 * nums[i];
            int l = i+1, r = nums.size()-1;
            while(l < r) {
                if (nums[l] + nums[r] == target) {
                    res.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }
                else if (nums[l] + nums[r] > target) {
                    r--;
                }
                else l++;
            }
        }
        vector<vector<int>> final(res.begin(), res.end());
        return final;
    }
};
