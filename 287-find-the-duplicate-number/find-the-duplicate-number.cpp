class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>set;
        int num = 0;
        for(int i=0;i<nums.size();i++){
            if(set.find(nums[i])==set.end()){
                set.insert(nums[i]);
            }
            else{
                num =  nums[i];
                break;
            }
        }
        return num;
        
    }
};