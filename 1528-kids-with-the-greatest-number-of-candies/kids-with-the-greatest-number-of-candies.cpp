class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans(candies.size(),false);
        int maxim = *max_element(candies.begin() , candies.end());
        for(int i = 0;i<candies.size();i++){
            if(maxim - candies[i] <= extraCandies){
                ans[i] = true;
            }
            else    
                ans[i] = false;
        }
        return ans;
    }
};