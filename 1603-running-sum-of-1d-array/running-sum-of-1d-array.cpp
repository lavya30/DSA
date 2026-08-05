class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()==1)
            return nums;
        ans.push_back(nums[0]);
        int sum = nums[0]+nums[1];
        ans.push_back(sum);
        for(int i = 2;i<nums.size();i++){
            sum+=nums[i];
            ans.push_back(sum);
            
            
        }
        return ans;
        
    }
};