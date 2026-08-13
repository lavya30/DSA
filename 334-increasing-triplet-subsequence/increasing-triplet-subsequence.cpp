class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int lowest = INT_MAX;
        int slowest = INT_MAX;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < lowest && nums[i] < slowest){
                lowest = nums[i];
            }
            else if(nums[i] < slowest && nums[i] > lowest){
                slowest = nums[i];
            }
            else if(nums[i] > lowest && nums[i] > slowest){
                return true;
            }

        }
        return false;
        
    }
};