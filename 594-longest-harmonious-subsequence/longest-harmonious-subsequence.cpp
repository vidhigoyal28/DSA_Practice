class Solution {
public:
    int findLHS(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int , int> freq;
    for(int x: nums){
        freq[x]++;
    }
    int ans = 0 ;
    for(auto& [num , count] :freq){
        if(freq.find(num+1) != freq.end()){
            ans = max(ans , count + freq[num+1]);
        }
    }
    return ans ;
    }
};