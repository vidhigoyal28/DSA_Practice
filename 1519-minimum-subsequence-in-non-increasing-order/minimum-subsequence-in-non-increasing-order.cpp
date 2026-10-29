class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int totalSum = 0;
        for(int num: nums){
            totalSum += num;
        }
        vector<int> ans;
        int selectedSum = 0 ;
        for(int i = nums.size() - 1; i>=0;i--){
            selectedSum += nums[i];
            ans.push_back(nums[i]);
            if(selectedSum > totalSum - selectedSum){
                break;
            }
        }
        return ans;
    }
};