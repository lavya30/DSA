class Solution {
private:
    int helper(vector<int>&nums,int st,int end){
        vector<int>dp(nums.size(), 0);

        dp[st] = nums[st];
        dp[st+1] = max(nums[st],nums[st+1]);

        for(int i = st+2;i<=end;i++){
            dp[i] =  max(dp[i-1],dp[i-2]+nums[i]);
        } 
        return dp[end];

    }
public:
    int rob(vector<int>& nums) {

        if(nums.size() == 1)
            return nums[0];
        else if(nums.size() == 2)
            return max(nums[0],nums[1]);

        return max(helper(nums , 0, nums.size()-2),helper(nums,1,nums.size()-1));
        
        
    }
};