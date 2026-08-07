class Solution {
private:
    int digitSum(int n){
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            sum+=digit;
            n=n/10;
        }
        return sum;
    }
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i =0;i<nums.size();i++){
            int val = digitSum(nums[i]);

            ans = min(val , ans);

        }
        return ans;
        
    }
};