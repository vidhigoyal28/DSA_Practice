class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i =0;i<s.length() ;i++){
            int reverseVal = 'z' - s[i]+1;
            ans += (i+1) * reverseVal;
        }
        return ans;
    }
};