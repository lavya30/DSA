class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                low = i;
                break;
            }
        }
        if(low == -1)
            return;
        int high = low+1;
        while(high<nums.size()){
            if(nums[high] != 0){
                swap(nums[low] , nums[high]);
           
                low++;
            }
            high++;
      }
         
    }
};