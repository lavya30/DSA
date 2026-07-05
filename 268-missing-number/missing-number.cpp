class Solution {
public:
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int num = 0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=i){
            num = i;
            break;
        }
        else{
            num = nums[i]+1;
        }

       }
       return num;
       
    }
};