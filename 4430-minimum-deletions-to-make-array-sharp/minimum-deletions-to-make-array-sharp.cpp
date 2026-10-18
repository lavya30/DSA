class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int total = 0;
        for(int i = 0;i<nums.size()-1;i++){
            int res = nums[i]^nums[i+1];
            if(res == 0){
                total++;
            }
        }        
        return total;
    }
};