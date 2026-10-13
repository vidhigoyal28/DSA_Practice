class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0 , ans = 0 , left = 0;
        for(int right = 0 ;right < s.size() ; right++){
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
                count++;
            }
            if(right - left+1 > k){
                if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] =='o'|| s[left] =='u'){
                    count--;
                }
                left++;
            }
            if(right - left+1 == k){
                ans = max(ans , count);
            }
        }
        return ans;
    }
};