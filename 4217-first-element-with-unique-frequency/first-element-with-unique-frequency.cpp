class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>freq;
        unordered_map<int,int> freqcount;
        for(int i = 0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            freqcount[freq[it.first]]++;
        }

        for(int i =0;i<nums.size();i++){
            int val = nums[i];
            if(freqcount[freq[val]] ==1){
                return nums[i];
            }
        }

    return -1;
        
    }
};