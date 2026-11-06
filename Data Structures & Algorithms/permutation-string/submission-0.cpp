class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size()) return false;
        for (int l = 0; l < s2.size()-s1.size()+1; l++) {
            unordered_map<char, int> hash;
            int flag = 1;
            for (int j = l; j < l+s1.size(); j++) {
                hash[s2[j]]++;
            }
            for (char x: s1) {
                if (count(s1.begin(), s1.end(), x) != hash[x]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) return true;
        }
        return false;
    }
};
