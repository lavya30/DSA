class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 1;
        int high = k;
        double maxim = INT_MIN;
        double result = 0;
        double sum = 0;
        for(int i = 0;i<k;i++){
            sum+=nums[i];
            
        }
        result = sum / k;
        maxim = max(maxim,result);

        while(high<nums.size()){
            sum = sum - nums[low-1];
            sum = sum+nums[high];
            result =  sum / k;

            maxim = max(maxim,result);


            high++;
            low++;

        }
        return maxim;
    }
};