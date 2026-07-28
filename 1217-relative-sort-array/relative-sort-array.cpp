class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        unordered_map<int,int>hash;

        for(int i = 0;i<arr1.size();i++){
            hash[arr1[i]]++;
        }
        for(auto it:arr2){
            while(hash[it]>0){
                ans.push_back(it);
                hash[it]--;

            }
        }
        vector<int>remaining;
        for(auto pair: hash){
            while(pair.second>0){
                remaining.push_back(pair.first);
                pair.second--;
            }
        }
        sort(remaining.begin(),remaining.end());

        for(int i =0;i<remaining.size();i++){
            ans.push_back(remaining[i]);
        }
        return ans;
        
    }
};