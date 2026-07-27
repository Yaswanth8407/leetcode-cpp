class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        // Find the first zero
        int i = 0;
        while (i < n && nums[i] != 0) {
            i++;
        }

        // If there are no zeros, we're done
        if (i == n) return;

        // j searches for the next non-zero
        int j = i + 1;

        while (j < n) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);

                // Move i to the next zero
                i++;
                while (i < n && nums[i] != 0) {
                    i++;
                }
            }
            j++;
        }
    }
};