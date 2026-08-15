class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        if(count(nums.begin(),nums.end(),0) == nums.size())
            return 0;

        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            ans = ans ^ nums[i];
        }
        if(ans !=0)
            return nums.size();
        return nums.size()-1;
        
    }
};