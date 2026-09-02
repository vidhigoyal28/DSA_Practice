class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>mpp; 
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num =nums[i];
            int m =target-num;
            if(mpp.find(m)!=mpp.end()){
                return {mpp[m],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};