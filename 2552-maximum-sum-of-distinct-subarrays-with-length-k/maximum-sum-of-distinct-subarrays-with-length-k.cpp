class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long sum = 0;
        int left =0;
        long long ans = 0;
        for(int right = 0 ;right < nums.size() ;right++){
            freq[nums[right]]++;
            sum += nums[right];
            while(freq[nums[right ]] > 1 || right-left+1 >k){
                freq[nums[left]]--;
                sum -= nums[left];
                left++;
            }
            if(right -left+1 == k){
                ans = max(ans , sum);
            }
        }
        return ans;
    }
};