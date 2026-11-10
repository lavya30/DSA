class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>hash;
        vector<int>ans;
        unordered_set<int>s1;


        for(auto it:nums1){
            hash[it]++;
        }
        for(auto it:nums2){
            if(hash[it] > 0)
                s1.insert(it);
        }
        for(auto it:s1)
            ans.push_back(it);
        return ans;
        
    }
};