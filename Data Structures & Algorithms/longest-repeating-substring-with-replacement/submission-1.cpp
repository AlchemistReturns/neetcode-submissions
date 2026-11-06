class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hash;
        unordered_set<char> charSet(s.begin(), s.end());

        int ans = 0;
        for (char c: charSet) {
            int l = 0, r = 0, rp = 0;
            while(r < s.size()) {
                if (s[r] == c) {
                    r++;
                    ans = max(ans, r-l);
                }
                else {
                    rp++;
                    if (rp > k) {
                        while(rp > k) {
                            if (s[l] != c) {
                                rp--;
                            }
                            l++;
                        }
                    }
                    r++;
                    ans = max(ans, r-l);
                }
            }
        }
        return ans;
    }
};
