class Solution {
public:
    string reverseWords(string s) {
        vector<string> wordsCollection;
        string word;
        string ans;

        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    wordsCollection.push_back(word);
                    word.clear();
                }
            } else {
                word += c;
            }
        }

        if (!word.empty()) {
            wordsCollection.push_back(word);
        }

        for (int i = wordsCollection.size() - 1; i >= 0; i--) {
            ans += wordsCollection[i];
            if (i != 0)
                ans += " ";
        }

        return ans;
    }
};