class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int need =1;
        for(int num : nums){
            if(num < need)
            continue;
            if(num == need)
            need++;
            if(num > need)
            return need;
        }
        return need;
    }
};