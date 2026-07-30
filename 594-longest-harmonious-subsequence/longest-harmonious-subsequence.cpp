class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxi = 0;
       unordered_map<int ,int>hash;
       for(int i =0;i<nums.size();i++){
        hash[nums[i]]++;
       }
       for(auto it:hash){
        if(hash.find(it.first+1)!=hash.end()){
            int sum = hash[it.first]+ hash[it.first+1];

            maxi = max(maxi,sum);
        }
       }
       return maxi;
    }
};