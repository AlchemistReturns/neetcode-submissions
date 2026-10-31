class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for (string str: strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            hash[temp].push_back(str);
        }

        vector<vector<string>> ans;
        for (auto [x,y] : hash) {
            ans.push_back(y);
        }
        return ans;
    }
};
