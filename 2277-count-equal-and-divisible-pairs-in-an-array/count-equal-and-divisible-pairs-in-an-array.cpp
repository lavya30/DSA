class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
    
  
    int counter = 0;
    for(int i = 0;i<nums.size();i++){
        int high = i+1;
        while(high<nums.size()){
            if(nums[i] == nums[high] && (i*high)%k == 0){
                counter++;
            }

            high++;
        }
        
    }
    return counter;
        
    }
};