class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int low = 0;
        int high = 1;
        int ans = 0;
        nums.push_back(0);
        while(high<nums.size()){
            ans+=nums[low];
            ans-=nums[high];


            low+=2;
            high+=2;
        }
        return ans;
    }
};