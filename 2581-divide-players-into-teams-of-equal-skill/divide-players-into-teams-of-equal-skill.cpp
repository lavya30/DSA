class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        sort(skill.begin(),skill.end());
        int low = 0;
        int high = skill.size()-1;
        int target = skill[low]+skill[high];
        long long ans = 0;
        while(low<high){
            if(skill[low]+skill[high] != target){
                return -1;
            }
            ans+= skill[low]*skill[high];
            low++;
            high--;
    }
    return ans;


        // int score = 0;
        // sort(skill.begin(),skill.end());
        // vector<pair<int,int>>temp;
        // int low = 0;
        // int high = skill.size()-1;
        // while(low<high){
            
        //     temp.push_back({skill[low],skill[high]});
        //     low++;
        //     high--;

        // }
        // for(int i= 0;i<temp.size()-1;i++){
        //     if(temp[i].second+ temp[i].first != temp[i+1].second+temp[i+1].first){
        //         return -1;
        //     }
        // }
        // long long ans = 0;
        // for(auto it:temp){
        //     ans+=it.first * it.second;
        // }
        // return ans;
        
    }
};