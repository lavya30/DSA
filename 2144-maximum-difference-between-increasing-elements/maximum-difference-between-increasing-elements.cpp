class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        int mini = nums[0];
        
        for(int i = 0;i<nums.size()-1;i++){
          
            if(nums[i+1] > mini){
               
                ans = max(ans ,  nums[i+1] -  mini);
            }
            else
                mini = min(mini , nums[i+1]);
        }
        return ans;
        
    }
};