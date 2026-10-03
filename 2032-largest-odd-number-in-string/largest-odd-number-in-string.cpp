class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while(i>=0 && (num[i] - '0')%2==0){
            i--;
        }
        if(i<0){
            return "";
        }
        string ans = num.substr(0 , i+1);
        int start =0;
        while(start < ans.size() && ans[start]==0){
            start++;
        }
        return ans.substr(start);
    }
};