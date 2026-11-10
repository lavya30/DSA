class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int>ans;

        for(auto it:nums2){
            auto f = find(nums1.begin(),nums1.end() , it);
            if(f != nums1.end()){
                ans.push_back(it);
                nums1.erase(f);
            }
        }
        return ans;

    }
};