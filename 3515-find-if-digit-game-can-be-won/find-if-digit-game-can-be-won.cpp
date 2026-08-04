class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int dob = 0;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<10)
                single+=nums[i];
            else 
                dob+=nums[i];

        }
        if(single == dob)
            return false;
        return true;
    }
};