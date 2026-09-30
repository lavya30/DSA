class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>dp(numRows+1);
        dp[0]= {1};
        dp[1] = {1, 1};

        for(int i = 2;i<numRows;i++){
            int first = dp[i-1].front();
            int last = dp[i-1].back();
            vector<int>temp;
            temp.push_back(first);
            for(int j = 1;j<dp[i-1].size();j++){
                int num = dp[i-1][j] + dp[i-1][j-1];
                temp.push_back(num); 
            }
            temp.push_back(last);
            dp[i] = temp;
        }
        dp.pop_back();
        
        return dp;
    }
};