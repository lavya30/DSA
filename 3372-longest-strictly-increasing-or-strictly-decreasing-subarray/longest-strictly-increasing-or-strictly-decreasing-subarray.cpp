class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int inc = 1;
        int dec = 1;
        int maxi = 1;

        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1] > nums[i]){
                inc++;
                maxi = max(maxi , inc);
            }
            else
                inc = 1;
        }
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1] < nums[i]){
                dec++;
                maxi = max(maxi ,  dec);
            }
            else
                dec = 1;
        }
        return maxi;
    }
};