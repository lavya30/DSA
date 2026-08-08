class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() ==1) 
            return nums[0];
        int counter = 1;
        int low = 0;
        int high = 1;
        int maxim = INT_MIN;
        
        while(high<nums.size()){

            if(nums[high]>nums[low])
                counter++;
            else 
                counter = 1;
            maxim =  max(maxim,counter);
            
            low++;
            high++;
        }
        return maxim;
    }
};