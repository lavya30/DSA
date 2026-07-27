class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int low  = 0;
        int high = 0;
        int sum = 0;
        while(high<nums.size()){
            sum+=nums[high];
            while(sum>=target){
                res = min(res,(high-low+1));
                sum =  sum - nums[low];
                low++;
            }
            high++;



        }
        if(res == INT_MAX)
            return 0;
        return res;
    }
};