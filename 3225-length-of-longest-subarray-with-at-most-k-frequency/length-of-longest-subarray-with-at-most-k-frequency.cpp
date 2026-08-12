class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        unordered_map<int,int>hash;
        int maxim = 0;
        int low = 0;
        int high= 0;
        while(high<nums.size()){
            hash[nums[high]]++;
            while(hash[nums[high]] > k){
                hash[nums[low]]--;
                low++;
            }
            high++;

            int len = high - low;
            maxim = max(maxim,len);

           

        }

        return maxim;
        
    }
};