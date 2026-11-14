class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini = INT_MAX;

        for(int i = 0;i<nums.size();i++){
            int count = 0;
            int sum = 0;
            for(int j = i;j<nums.size();j++){
                count++;
                sum+=nums[j];
                if(count>=l && count <= r){
                    if(sum > 0)
                        mini = min(mini , sum);
                }
            }    
        }
        if(mini == INT_MAX)
            return -1;
        return mini;

    }
};