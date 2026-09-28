class Solution {
public:
    int maxDepth(string s) {
        int maxCount =0;
        int currCount = 0;
        for(char c: s){
            if(c == '(')
            currCount++;
            else if(c==')')
            currCount--;
            maxCount = max(currCount , maxCount);

        }
        return maxCount;
    }
};