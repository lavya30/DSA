class Solution {
private:
    int digit(int nums){
        int sum = 0;
        while(nums!=0){
            int digit = nums%10;
            sum+=digit;
            nums/=10;
        }
        return sum;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digit_sum = 0;

        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            digit_sum+= digit(nums[i]);

        }
        return abs(sum - digit_sum);
    }
};