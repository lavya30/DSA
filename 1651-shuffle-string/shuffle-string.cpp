class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans(size(s) , ' ');
        for(int i = 0;i<size(s);i++){
            ans[indices[i]] = s[i];
            
        }
        return ans;
        
    }
};