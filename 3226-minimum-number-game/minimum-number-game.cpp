class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int low = 0;
        int high = 1;

        while(low<nums.size()){
            swap(nums[low],nums[high]);
            low+=2;
            high+=2;
        }
        return nums;


        
    }
};