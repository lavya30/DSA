class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i  = 0; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i] =  nums[i] *2;
                nums[i+1] = 0;

            }
        }

        int low = -1;
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i] == 0){
                low = i;
                break;
            }
        }
        if(low == -1)
            return nums;
        int high =  low+1;
        while(high<nums.size()){
            if(nums[high] != 0 ){
                swap(nums[low], nums[high]);
                low++;
            }
            high++;
        }
        return nums;
    }
};