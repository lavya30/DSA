class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n = nums.size();
        // return (nums[n-1]-1)*(nums[n-2]-1);

        int first = nums[0];
        int second = 0;
        for(int i = 1;i<n;i++){
            if(nums[i]>=first){
                second =  first;
                first =  nums[i];

            }
            else if(nums[i]>second){
                second = nums[i];
            }
        }
        return (first-1) * (second-1);
        
    }
};