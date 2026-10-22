class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = nums.size() -1;
        set<double> average;
        while(i<j){
            double avg = (nums[i] + nums[j])/2.0;
            average.insert(avg);
            i++;
            j--;
        }
        return average.size();
        
    }
};