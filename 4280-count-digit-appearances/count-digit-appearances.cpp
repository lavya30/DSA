class Solution {
private:
    int countTwo(int n,int digit){
        int counter = 0;
        while(n>0){
            int dig = n%10;
            if(dig == digit)
                counter++;
            n/=10;
        }
        return counter;
    }
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int counter = 0;
        
        for(int i = 0;i<nums.size();i++){
            counter+=countTwo(nums[i],digit);
        }
     return counter;   
    }
};