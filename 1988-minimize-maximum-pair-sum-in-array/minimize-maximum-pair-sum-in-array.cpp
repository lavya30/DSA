class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxim = INT_MIN;
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            maxim = max(maxim , nums[low]+nums[high]);
            low++;
            high--;
        }
        return maxim;
    }
};