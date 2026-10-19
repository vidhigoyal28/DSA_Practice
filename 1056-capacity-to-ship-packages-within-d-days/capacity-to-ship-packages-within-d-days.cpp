class Solution {
public:
int canShip(vector<int>& weights , int days , int capacity){
    int daysNeeded = 1;
    int currentLoad =0;
    for(int w: weights){
        if(currentLoad + w > capacity){
            daysNeeded++;
            currentLoad =w;
        }
        else{
            currentLoad += w;
        }
    }
    return daysNeeded <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end());
        int high = accumulate(weights.begin() , weights.end(),0);
        while(low <= high){
            int capacity = low + (high-low)/2;
            if(canShip(weights , days , capacity)){
                high = capacity-1;
            }
            else{
                low = capacity+1;
            }
        }
        return low;
    }
};