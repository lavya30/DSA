class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k = 0;
       
        int count = 1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                k++;
                count++;
                nums[k]=nums[i];
            }
        }
        return count;
    }
};