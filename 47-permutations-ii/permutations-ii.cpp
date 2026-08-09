class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>>temp;
      
        while(true){
            if(temp.find(nums) != temp.end())
                break;
            temp.insert(nums);
            next_permutation(nums.begin(),nums.end());
        }
        vector<vector<int>>ans(temp.begin(),temp.end());
        return ans;
        
    }
};