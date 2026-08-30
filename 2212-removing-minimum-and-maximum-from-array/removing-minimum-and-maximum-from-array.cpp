class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int route1 = 0;
        int route2 = 0;
        int route3 = 0;
        int mini_idx = min_element(nums.begin(),nums.end()) - nums.begin();
        int maxi_idx = max_element(nums.begin(),nums.end()) -  nums.begin();

        int i = min(mini_idx ,  maxi_idx);
        int j = max(mini_idx, maxi_idx);

        route1 = j+1;
        route2 = (nums.size()) - i;
        route3 = (i+1) + (nums.size()) - j;


        return min({route1 , route2 , route3});


    }

};