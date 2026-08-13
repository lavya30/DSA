class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int counter = 0;
        for(int i = 0; i<nums.size()-2;i++){
            for(int j =i+1; j<nums.size()-1; j++){
                for(int k = j+1; k<nums.size();k++){
                    if(find(nums.begin(),nums.end(),nums[i]+nums[j]+nums[k]) != nums.end()){
                        counter+= count(nums.begin()+k,nums.end(),nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        return counter;
    }
};