class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total_sum = 0;
        for(int i = 0;i<nums.size();i++){
            total_sum+=nums[i];
        }
        int sum = 0;
        int counter = 0;
        for(int i = 0;i<nums.size()-1;i++){
            sum+=nums[i];
            int second_sum = total_sum -  sum;
            if((second_sum - sum)%2 == 0)
                counter++;


        }
        return counter;
        
    }
};