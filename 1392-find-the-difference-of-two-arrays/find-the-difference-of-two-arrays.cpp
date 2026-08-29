class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>hash1;
        unordered_map<int,int>hash2;
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        vector<vector<int>>ans;
        for(auto it:set1){
            hash1[it]++;
        }
        for(auto it:set2){
            hash2[it]++;
        }

        vector<int>temp;

        for(auto it: set1){
            if(hash2[it] == 0){
                temp.push_back(it);
            }
        }
        ans.push_back(temp);
        temp.clear();

        for(auto it: set2){
            if(hash1[it] == 0){
                temp.push_back(it);
            }
        }
        ans.push_back(temp);




        return ans;
    }
};