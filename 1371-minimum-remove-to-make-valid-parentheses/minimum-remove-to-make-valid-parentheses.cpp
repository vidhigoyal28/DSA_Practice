class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp = "";
        int count =0;
        for(char c: s){
            if(c == '('){
                count++;
                temp += c;
            }
            else if(c == ')'){
                if(count>0){
                count--;
                temp += c;
                }
            }
            else
            temp += c;
        }
        string ans = "";
        count = 0;
        for(int  i = temp.size() -1 ;i >=0;i--){
            if(temp[i] == ')'){
                count++;
                ans += temp[i];
            }
            else if(temp[i] =='('){
                if(count >0){
                    count--;
                    ans += temp[i];
                }
            }
            else
            ans += temp[i];
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};