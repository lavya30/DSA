class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int maxim = INT_MIN;
        int counter = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]== 1){
                counter++;
            }
            else
                counter = 0;
            maxim = max(maxim , counter);
        }
        
        return maxim;        
    }
};