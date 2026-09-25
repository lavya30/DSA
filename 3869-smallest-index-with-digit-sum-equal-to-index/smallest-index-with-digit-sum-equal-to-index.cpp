class Solution {
private:
    bool equal(int num , int i){
        int sum = 0;
        int digit = 0;
        while(num!=0){
            digit = num%10;
            sum+=digit;
            num/=10;
        }
        return sum == i;
    }
public:
    int smallestIndex(vector<int>& nums) {
        
        for(int i = 0;i<nums.size();i++){
            int num = nums[i];

            if(equal(num , i))
                return i;
        }
        return -1;
        
    }
};