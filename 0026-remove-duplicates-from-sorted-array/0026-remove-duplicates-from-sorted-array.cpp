class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> elms;

        for(int i = 0; i < nums.size(); i++) {

            bool found = false;

            for(int j = 0; j < elms.size(); j++) {
                if(nums[i] == elms[j]) {
                    found = true;
                    break;
                }
            }

            if(!found)
                elms.push_back(nums[i]);
        }

        for(int i = 0; i < elms.size(); i++)
            nums[i] = elms[i];

        return elms.size();
    }
};