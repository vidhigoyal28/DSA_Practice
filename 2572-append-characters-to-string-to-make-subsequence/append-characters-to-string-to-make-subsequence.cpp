class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0;
        for( char c : s){
            if(i < t.length() && c == t[i]){
                i++;
            }
        }
        return t.length() - i;
    }
};