class Solution {
public:
    int minCost(int n) {
        vector<int>dp(n+1,-1);
        dp[0] = 0;
        dp[1] = 0;
        int cost = 0;

        for(int i = 2;i<=n;i++){
            dp[i] = 1* (i-1);
            cost+= dp[i];
        }
        return cost;

    }
};