class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans;
        for(int i=n;i>=n;i++){
            int nCopy = i;
            ans=1;
            while(nCopy!=0){
                ans = ans*(nCopy%10);
                nCopy/=10;
            }
            if(ans%t==0){
                return i;
            }
        }

        return ans;
    }
};