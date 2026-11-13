class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int count = 0 ;
        for(int k = 0 ;k<=n ;k++){
            bool left = (k == 0 || nums[k-1] < k) ;
            bool right = (k == n || nums[k] > k);
            if(left && right){
                count++;
            }
        }
        return count;
    }
};