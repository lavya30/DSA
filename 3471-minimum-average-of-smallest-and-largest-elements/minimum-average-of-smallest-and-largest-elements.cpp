class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        float mini = INT_MAX;
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            float val = (nums[low] + nums[high])/2.0;
            mini = min(mini,val);
            low++;
            high--;
        }
        
        return mini;
        
    }
};