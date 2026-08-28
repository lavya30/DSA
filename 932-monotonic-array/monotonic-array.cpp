class Solution {
private:
    bool isInc(vector<int>nums){
        bool flag = true;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]){
                flag = false;
                break;
            }
        }
        return flag;
    }
    bool isDec(vector<int>nums){
        bool flag = true;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]){
                flag = false;
                break;
            }
        }
        return flag;
    }
public:
    bool isMonotonic(vector<int>& nums) {

        if(isInc(nums) || isDec(nums))
            return true;
        return false;


        
    }
};