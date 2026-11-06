class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (m < n) return false;
        vector<int> a(26), b(26);
        for (int i = 0; i < n; i++) a[s1[i] - 'a']++, b[s2[i] - 'a']++;
        if (a == b) return true;
        for (int i = n; i < m; i++) {
            b[s2[i] - 'a']++;
            b[s2[i - n] - 'a']--;
            if (a == b) return true;
        }
        return false;
    }
};