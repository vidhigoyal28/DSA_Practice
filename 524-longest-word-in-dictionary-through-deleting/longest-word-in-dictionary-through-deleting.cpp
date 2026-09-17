class Solution {
public:
bool isSubsequence(string word , string s){
    int i = 0 ;
    for(char c : s){
        if(i < word.length() && word[i] == c){
            i++;
        }
    }
    return i == word.length();
}
    string findLongestWord(string s, vector<string>& dictionary) {
       string ans = "";
       for(string word : dictionary) {
        if(isSubsequence(word , s)){
            if(word.length() > ans.length()){
                ans  = word;
                            }
                            else if(ans.length( ) == word.length() && word < ans){
                                ans = word;
                            }
                            }
        }
       
       return ans;
    }
};