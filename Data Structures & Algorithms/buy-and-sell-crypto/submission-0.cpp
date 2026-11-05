class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0, curr=0;
        for (int i = 0; i < prices.size(); i++) {
            ans = max(ans, prices[i]-prices[curr]);
            if (prices[i] < prices[curr]) curr = i;
        }
        return ans;
    }
};
