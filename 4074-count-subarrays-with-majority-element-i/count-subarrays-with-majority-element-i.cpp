class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int counter = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target)
                nums[i] = 1;
            else
                nums[i] = -1;
        }
        for(int i= 0;i<nums.size();i++){
             int total = 0;
            for(int j = i;j<nums.size();j++){

                total = total+nums[j];

                if(total > 0)
                    counter++;

            }
        
        }
        return counter;
    }
};