class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m+=n;
        for(int i=n-1; i>=0; i--){
            m--;
            nums1[m]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};