class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;

        int i = nums.size() - 1;

        while (i >= 0) {
            ans.push_back(nums[i]);
            i--;
        }

        return ans;
    }
};