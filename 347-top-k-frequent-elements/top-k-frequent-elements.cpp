class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }

        vector<pair<int,int>>temp(hash.begin(),hash.end());

        sort(temp.begin(), temp.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });

        for(int i =0;i<k;i++){
            ans.push_back(temp[i].first);
        }
        return ans;
        
    }
};