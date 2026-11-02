class Solution {
public:
    bool isPalindrome(string s) {
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return static_cast<char>(std::tolower(c));
        });
        int l = 0, r = s.size()-1;
        while (l < r) {
            if (!std::isalnum(static_cast<unsigned char>(s[l]))) {
                l++;
                continue;
            }
            if (!std::isalnum(static_cast<unsigned char>(s[r]))) {
                r--;
                continue;
            }
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
