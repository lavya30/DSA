class Solution {
private:
    int findLength(int n){
        int sum = 0;
        while(n>0){
            int digit = n%10;
            sum++;
            n/=10;
        }
        return sum;
    }
public:
    int findNumbers(vector<int>& nums) {
        int counter = 0;
        for(int i = 0;i<nums.size();i++){
            if(findLength(nums[i])%2==0)
                counter++;

        }
        return counter;
    }
};