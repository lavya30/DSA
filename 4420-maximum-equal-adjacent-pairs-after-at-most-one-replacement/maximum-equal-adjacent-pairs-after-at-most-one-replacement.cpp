class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {

        int ans  = 0;

        map<pair<int,int>,int>s;

        for(int i = 1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                ans++;
                
            }
        }

        for(int i = 1;i<nums.size();i++){
            int a = nums[i-1];
            int b = nums[i];

            if(a == b)
                continue;
            s[{a,b}]++;
            s[{b,a}]++;
        }
        int maxim = 0;
        for(auto it:s){
            maxim = max(maxim , it.second);
        }

        return ans + maxim;
    }
};