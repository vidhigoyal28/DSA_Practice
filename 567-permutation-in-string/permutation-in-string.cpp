class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
        return  false;
        vector<int> need(26,0);
        vector<int> window(26,0);
        for(char c: s1){
            need[c-'a']++;
        }
        int left = 0;
        for(int right = 0; right <s2.length() ;right++){
            window[s2[right] -'a']++;
            if(right-left+1 == s1.length()){
                if(window == need) return true;
                window[s2[left] - 'a']--;
                left++;
            }
        }
        return false;
    }
};