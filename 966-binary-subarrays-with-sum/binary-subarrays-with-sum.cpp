class Solution {
public:
int atmostSum(vector<int>& nums, int goal){
    if(goal < 0) return 0;
    int l = 0;
    int sum =0;
    int c = 0;
    for(int r = 0; r<nums.size();r++){
        sum += nums[r];
        while(sum > goal){
            sum -= nums[l];
            l++;
        }
        c += r-l+1;
    }
    return c;

}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostSum(nums, goal) - atmostSum(nums, goal-1);
    }
};