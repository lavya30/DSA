class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        for(int i = 0; i<nums.size();i++){
            if(!hash.count(target - nums[i])){
                hash[nums[i]] = i;
            }
            else{
                return {hash[target - nums[i]] , i};
            }

        }


        return {};
    }
};