class Solution {
public:
    int atmostK(vector<int>& nums, int k) {
        if(k <0) return 0;
        int l = 0 ;
        int odd  =0;
        int count = 0;
        for(int r =0 ;r < nums.size() ;r++){
            if(nums[r] %2 !=0){
                odd++;
            }
            while(odd >k){
                if(nums[l] %2 !=0){
                    odd--;
                }
                l++;
            }
            count += r-l+1;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k){
        return atmostK(nums , k) - atmostK(nums , k-1);

    }
};