class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        vector<int>left(nums.size(),0);
        vector<int>right(nums.size(),0);
        int sum = 0;
        left[0] = 0;
        right[0] = 0;
        for(int i = 0;i<nums.size()-1;i++){
            sum+=nums[i];
            left[i+1] = sum;

        }
        sum = 0;
        for(int i = nums.size()-1;i>0;i--){
            sum+=nums[i];
            right[i-1] = sum;
        }
      

        vector<int>ans(nums.size(),0);
        for(int i = 0;i<nums.size();i++){
            ans[i] = abs(left[i] - right[i]);
            
        }
        return ans;
    }
};