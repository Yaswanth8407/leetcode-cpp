class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int write = 0;
        while(i<n){
            int j=i;
            char currentEl = chars[j];
            while(j<n && currentEl == chars[j]){
                j++;
            }
            int count = j-i;
            chars[write++] = currentEl;
            if(count>1){
                string cnt = to_string(count);
                for(char c:cnt){
                    chars[write++]=c;
                }
            }
            i=j;
        }
        return write; 
    }
};