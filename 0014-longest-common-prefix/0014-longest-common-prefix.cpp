class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string ans = "";

        for (int i = 0; i < min(strs.front().length(), strs.back().length()); i++) {
            if (strs.front()[i] == strs.back()[i])
                ans += strs.front()[i];
            else
                break;
        }

        return ans;
    }
};