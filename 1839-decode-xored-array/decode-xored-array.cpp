class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        for(int i = 0;i<encoded.size();i++){
            auto val =  ans[i] ^ encoded[i];
            ans.push_back(val);
        }
        return ans;


        
    }
};