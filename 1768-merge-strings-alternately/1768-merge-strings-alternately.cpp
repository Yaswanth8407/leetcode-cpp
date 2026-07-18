class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        for(int i=0; i < max(word1.length(),word2.length()); i++){
            if(i<word1.length()){
                str.push_back(word1[i]);
            }
            if(i<word2.length()){
                str.push_back(word2[i]);
            }
        }
        return str;
    }
};