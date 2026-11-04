class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> freq(26,0);
        for(char ch: licensePlate){
            if(isalpha(ch)){
                ch = tolower(ch);
                freq[ch-'a']++;
            }
        }
        string ans = "";
        for(string word : words ){
            vector<int> temp(26,0);
            for(char ch: word){
                temp[tolower(ch) - 'a']++;
            }
            bool valid = true;
            for(int i = 0 ;i< 26;i++){
                if(temp[i] <  freq[i]){
                    valid = false;
                    break;
                }
            }
            if(valid && (ans == "" || word.size() < ans.size())){
                ans = word;
            }
        }
        return ans;
    }
};