class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        for(int i = 0 ;i<k;i++){
            int mini = nums[0];
            int index = 0;
            for(int j = 1;j<nums.size();j++){
                if(nums[j]<mini){
                    mini = nums[j];
                    index = j;
                }
            }
            nums[index] = mini * multiplier;
            
        }
        
        return nums;
    }
};