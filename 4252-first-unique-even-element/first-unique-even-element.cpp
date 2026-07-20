class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int ,int>hash;
        
        // unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                hash[nums[i]]++;
        }
        for(int num:nums){
            if(num%2==0 && hash[num]== 1){
                return num;
            }
        }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]%2==0){
        //         if(hash[nums[i]] == 1){
        //             return nums[i];
        //         }
        //     }
        // }

        return -1;

        
    }
};