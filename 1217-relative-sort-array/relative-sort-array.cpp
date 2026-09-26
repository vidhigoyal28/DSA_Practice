class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       unordered_map<int, int> freq;
       for(int x: arr1){
        freq[x]++;
       } 
       vector<int> ans;
       for(int x : arr2){
        while(freq[x] > 0){
            ans.push_back(x);
            freq[x]--;
        }
       }
       vector<int> remaining;
       for(auto &x: freq){
        int p = x.first;
        int count = x.second;
        while(count > 0){
            remaining.push_back(p);
            count--;
        }
       }
       sort(remaining.begin() , remaining.end());
       for(int x: remaining){
        ans.push_back(x);
       }
       return ans;

    }
};