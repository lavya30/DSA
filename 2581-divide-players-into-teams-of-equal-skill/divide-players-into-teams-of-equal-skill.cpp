class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int score = 0;
        sort(skill.begin(),skill.end());
        vector<pair<int,int>>temp;
        int low = 0;
        int high = skill.size()-1;
        while(low<high){
            
            temp.push_back({skill[low],skill[high]});
            low++;
            high--;

        }
        for(int i= 0;i<temp.size()-1;i++){
            if(temp[i].second+ temp[i].first != temp[i+1].second+temp[i+1].first){
                return -1;
            }
        }
        long long ans = 0;
        for(auto it:temp){
            ans+=it.first * it.second;
        }
        return ans;
        
    }
};