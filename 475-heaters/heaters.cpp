class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin() , heaters.end());
        int ans = 0;
        for(int house : houses){
            int low  = 0 , high = heaters.size()-1 ;
            int dist = INT_MAX;
            while(low <= high){
                int mid = low +(high-low)/2;
                dist = min(dist , abs(house - heaters[mid]));
                if(heaters[mid] < house){
                    low = mid+1;
                }
                else
                high = mid -1;

            }
            ans = max(ans , dist);
        }
        return ans ;
    }
};