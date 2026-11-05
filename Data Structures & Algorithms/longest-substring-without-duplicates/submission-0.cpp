class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int l = 0, ans = 0, temp=0;
        for (int i = 0; i< s.size(); i++) {
            hash[s[i]]++;
            temp++;
            while(hash[s[i]] != 1) {
                hash[s[l]]--;
                l++;
                temp--;
            }
            ans = max(ans, temp);
        }
        return ans;
    }
};
