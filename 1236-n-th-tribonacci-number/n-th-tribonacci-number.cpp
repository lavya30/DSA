class Solution {
public:
    int tribonacci(int n) {
        if(n == 0)
            return 0;
        else if(n <2)
            return 1; 
    
        // vector<int>dp(n+1,-1);
        // dp[0] = 0;
        // dp[1] = 1;
        // dp[2] = 1;

        // for(int i = 3;i<=n;i++){
        //     dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
        // }
        // return dp[n];

        int t1  = 0;
        int t2 = 1;
        int t3 = 1;
        int current = 0;
        for(int i =3;i<=n;i++){
            current = t1+t2+t3;
            t1 = t2;
            t2 =t3;
            t3 = current;
        }
        return t3;

    }
};