class Solution {
public:
    int missingInteger(vector<int>& nums) {
    
     int sums = nums[0];
     for(int i = 1;i<nums.size();i++){
        if(nums[i] == nums[i-1]+1){
            sums+=nums[i];
        }
        else
            break;
     }
    unordered_set<int>hash(nums.begin(),nums.end());
    while(hash.count(sums)){
        sums++;
    }
    
    


    //  while(true){
    //     if(find(nums.begin(),nums.end(),sums) == nums.end()){
    //         break;
    //     }
    //     else
    //         sums++;
    //  }
        return sums;
    }
};