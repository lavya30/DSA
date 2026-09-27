class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        while(!nums.empty()){
            unordered_set<int>s1(nums.begin(),nums.end());
            vector<int>s(s1.begin(),s1.end());
            sort(s.begin(),s.end());
            for(auto it:s){
                ans.push_back(it);

                auto num = find(nums.begin(),nums.end(),it);
                if(num !=nums.end())
                    nums.erase(num);
            }
        }
        return ans;
        
    }
};