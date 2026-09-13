class Solution {
public:
    int minDays(int n) {
        const int INF = 1e9;
        vector<int> dp(n+1 , INF);
        dp[0] = 0;
        for(int i = 0 ;i<=n;i++){
            if(dp[i] == INF)
                continue;
                for(int k =1 ;; k++){
                    int points = k*(k+1)/2;
                    if(i+points > n)
                    break;
                    int cost ; 
                    if(i==0)
                    cost = k;
                    else
                    cost = k+1;
                    dp[i+points] = min(dp[i+points] , dp[i]+cost);
                
            }
        }
        return dp[n];
    }
};