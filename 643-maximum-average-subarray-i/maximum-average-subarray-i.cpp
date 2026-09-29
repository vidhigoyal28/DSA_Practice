class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ans =INT_MIN;
        int sum =0;
        int left =0;
        int right =0;
        for(right =0; right < nums.size(); right ++){
            sum += nums[right];
            if(right - left+1 == k){
                ans = max(ans , sum);
                sum -= nums[left];
                left++;
            }
        }
        return double(ans)/k;
    }
};