class Solution {
public:
    string reverseVowels(string s) {        
        int leftPointer = 0;
        int rightPointer = s.length()-1;
        while(leftPointer<rightPointer){
            bool leftVowel = isVowel(s[leftPointer]);
            bool rightVowel = isVowel(s[rightPointer]);
            if (leftVowel && rightVowel){
                swap(s[leftPointer],s[rightPointer]);
                leftPointer++;
                rightPointer--;
            }
            else if(leftVowel && !rightVowel){
                rightPointer--;
            }
            else if(rightVowel && !leftVowel){
                leftPointer++;
            }
            else{
                leftPointer++;
                rightPointer--;
            }
        }
        return s;
    }
    bool isVowel(char c) {
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
};
