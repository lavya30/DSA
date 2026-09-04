class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxim = nums[0];
        int ans = INT_MAX;
        
        for(int i = 0;i<nums.size();i++){
            maxim =  max(nums[i] ,  maxim);
            int mini = *min_element(nums.begin()+i ,  nums.end());

            if(maxim - mini <= k){
                ans = min(i , ans);
            }
        }
        return ans != INT_MAX? ans : -1;
    }
};