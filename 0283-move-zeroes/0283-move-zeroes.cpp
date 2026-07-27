class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int i = 0;   // index, not value

        while (i < n && nums[i] != 0) {
            i++;
        }

        if (i == n) return;

        int j = i + 1;

        while (j < n) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);

                i++;
                while (i < n && nums[i] != 0) {
                    i++;
                }
            }
            j++;
        }
    }
};