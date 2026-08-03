class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans(2);
        int index = 0;
        unordered_map<int,int>hash;
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
            if(hash[nums[i]]==2){
                ans[index]= nums[i];
                index++;
            }
           

        }
        return ans;
    }
};