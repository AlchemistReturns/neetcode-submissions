class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0, l= 0, r = heights.size()-1;
        while(l < r) {
            int ans = (r-l) * min(heights[l], heights[r]);
            res = max(ans, res);
            if (heights[l] < heights[r]) l++;
            else r--;
        }
        return res;
    }
};
