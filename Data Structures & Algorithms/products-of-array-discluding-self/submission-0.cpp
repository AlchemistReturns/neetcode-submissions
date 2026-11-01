class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if (count(nums.begin(), nums.end(), 0) > 1) {
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        else if (count(nums.begin(), nums.end(), 0) == 1) {
            long long prod = 1;
            for (int x: nums) {
                if (x == 0) continue;
                prod *= x;
            }
            vector<int> ans;
            for (int x: nums) {
                if (x != 0) ans.push_back(0);
                else ans.push_back(prod);
            }
            return ans;
        }
        else {
            long long prod = 1;
            for (int x: nums) {
                prod *= x;
            }
            vector<int> ans;
            for (int x: nums) {
                ans.push_back(prod/x);
            }
            return ans;
        }
    }
};
