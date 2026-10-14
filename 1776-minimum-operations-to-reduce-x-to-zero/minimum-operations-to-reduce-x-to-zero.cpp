class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        int sum = 0 , maxLen = -1,  left =0;
        for(int x: nums){
            total += x;
        }
        int target = total-x;
        if(target < 0)
        return -1;
        for(int right = 0 ;right < nums.size();right ++){
            sum += nums[right];

            while(sum > target){
                sum -= nums[left];
                left++;
            }
            if(sum == target){
                maxLen = max(maxLen , right-left+1);
            }

        }
        if(maxLen == -1)
        return -1;
        return nums.size() - maxLen;

    }
};