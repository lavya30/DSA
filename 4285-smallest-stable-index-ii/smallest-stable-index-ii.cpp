class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

    //    vector<int>prefix;
       vector<int>suffix;

       int n = nums.size();
       int ans = INT_MAX;
       
       

       int mini = nums[n-1];
       for(int i = n-1; i >=0;i--){
            mini =  min(mini, nums[i]);
            suffix.push_back(mini);
       }

       int maxim = nums[0];
       for(int i = 0;i<nums.size();i++){
            maxim = max(maxim, nums[i]);
            if(maxim - suffix[n-i-1] <= k){
                ans =  min(ans,i);
            }
            // prefix.push_back(maxim);
       }

    //    for(int i = 0;i<n;i++){
    //     if(prefix[i] - suffix[n-i-1] <= k){
    //         ans = min(ans,i);

    //     }
    //    }
       return ans == INT_MAX ? -1 : ans;
    }
};