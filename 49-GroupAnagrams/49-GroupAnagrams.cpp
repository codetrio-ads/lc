// Last updated: 9/8/2026, 12:38:49 am
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy = strs;
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(copy[i]);
        }
        vector<vector<string>> ans;
        for (auto &it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};