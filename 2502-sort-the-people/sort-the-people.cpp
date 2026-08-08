class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>temp;


        for(int i = 0; i<names.size();i++){
            temp.push_back({names[i] , heights[i]});
        }
        vector<string>ans;
        sort(temp.begin(),temp.end(),[](const pair<string,int> &a , const pair<string,int> &b){
            return a.second > b.second;

        });
        for(int i =0;i<temp.size();i++){
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};