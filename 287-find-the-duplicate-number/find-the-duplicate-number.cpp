class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_set<int>hash;
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(hash.count(nums[i]) == 0)
                hash.insert(nums[i]);
            else
                ans= nums[i];
        }
        return ans;
    }
};