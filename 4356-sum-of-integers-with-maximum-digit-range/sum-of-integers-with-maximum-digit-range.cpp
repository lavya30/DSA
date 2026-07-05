class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int biggest=0;
        int total =0;
        unordered_map<int,int>hashmap;
        for(int i=0;i<nums.size();i++){

            string numStr = to_string(abs(nums[i])); 
            auto result=minmax_element(numStr.begin(),numStr.end());

            int diff = *result.second -  *result.first;
            hashmap.insert({nums[i],diff});
            if(diff>biggest){
                  biggest =  diff;
            }  
        }

        for(int i=0;i<nums.size();i++){
            if(hashmap[nums[i]] == biggest){
                total+=nums[i];
            }
        }
        return total;

        
        
    }
};