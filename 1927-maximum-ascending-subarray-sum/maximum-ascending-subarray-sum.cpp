class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];

        int maxim = INT_MIN;
        int sum = 0;
        nums.push_back(0);
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]){
                sum+=nums[i];
            }
            else if(nums[i] >= nums[i+1] || i >= nums.size()){

                sum+=nums[i];
                maxim = max(maxim,sum);
                sum = 0;
            }

            
        }

        return maxim;
    }
};