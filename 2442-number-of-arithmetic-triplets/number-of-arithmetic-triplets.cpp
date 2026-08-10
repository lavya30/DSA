class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int counter = 0;
        for(int i = 0;i<static_cast<int>(nums.size()) - 2;i++){
            for(int j =i+1;j<nums.size()-1;j++){
                for(int k = j+1;k<nums.size();k++){
                    if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
                        counter++;
                }
            }
        }
        return counter;
    }
};