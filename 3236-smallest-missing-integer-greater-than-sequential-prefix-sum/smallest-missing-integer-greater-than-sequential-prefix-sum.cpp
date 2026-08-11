class Solution {
public:
    int missingInteger(vector<int>& nums) {
    
     int sums = nums[0];
     for(int i = 1;i<nums.size();i++){
        if(nums[i] == nums[i-1]+1){
            sums+=nums[i];
        }
        else
            break;
     }
     while(true){
        if(find(nums.begin(),nums.end(),sums) == nums.end()){
            break;
        }
        else
            sums++;
     }
        return sums;
    }
};