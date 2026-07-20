class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                if(hash[nums[i]] == 1){
                    return nums[i];
                }
            }
        }

        return -1;

        
    }
};