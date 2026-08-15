class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int counter = 0;
        int low = 0;
        int high = nums.size()-1;

        while(low<high){
             while(nums[low] != 0 && low< nums.size()-1){
                low++;
            }
            while(nums[high] == 0 && high>0){
                high--;
            }
            if(low<high){

                swap(nums[low] , nums[high]);
                counter++;
            }
        }
        return counter;
    }
};