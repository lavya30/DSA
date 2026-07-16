class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixGcd;
        int max = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>max)
                max =  nums[i];
            prefixGcd.push_back(gcd(nums[i],max));
        }
        sort(prefixGcd.begin(),prefixGcd.end());

        int left = 0;
        int right = prefixGcd.size()-1;
        long long sum = 0;
        while(left<right){
            sum+=gcd(prefixGcd[left],prefixGcd[right]);
            left++;
            right--;

        }
        return sum;
        
    }
};