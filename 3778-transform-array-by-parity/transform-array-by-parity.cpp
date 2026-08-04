class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        for(int i= 0;i<n;i++){
            if(nums[i]%2==0)
                nums.push_back(0);
            else
                nums.push_back(1);
        
        }
        nums.erase(nums.begin(),nums.begin()+n);
        sort(nums.begin(),nums.end());
        return nums;
    }
};