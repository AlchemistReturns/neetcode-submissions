class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for (int i = 0; i < nums.size()-2; i++) {
            int target = -1 * nums[i];
            int l = i+1, r = nums.size()-1;
            vector<int> ans;
            while(l < r) {
                if (nums[l] + nums[r] == target) {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[l]);
                    ans.push_back(nums[r]);
                    res.insert(ans);
                    ans.clear();
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
