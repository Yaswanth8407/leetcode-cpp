class Solution {
public:
    bool isPalindrome(string s) {
        string ans1;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])) ans1.push_back(s[i]);
        }

        string ans2 = ans1;
        reverse(ans2.begin(),ans2.end());

        for(int i = 0; i < ans1.size(); i++) {
            ans1[i] = tolower(ans1[i]);
            ans2[i] = tolower(ans2[i]);
        }   

        return ans1 == ans2;    
    }
};