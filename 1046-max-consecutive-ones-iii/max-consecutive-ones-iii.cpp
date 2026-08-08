class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int low = 0;
        int high = 0;
        int maxim = INT_MIN;
        int zeroscount = 0;
        while(high<nums.size()){
            if(nums[high] == 0) {
                zeroscount++;
              

            }
           
            while(zeroscount>k){

                
                if(nums[low] == 0)  
                    zeroscount--;
                low++;

            }
           
            int val =  high -low +1;
            maxim = max(maxim , val);
            
            high++;
        }
        return maxim;
        
    }
};