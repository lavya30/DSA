class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string initial = strs[0];

        for(int i = 1;i<strs.size();i++){
            string st = "";
            string s = strs[i];
            for(int j = 0;j<min(size(s) , size(initial)); j++){
                if(initial[j] == s[j]){
                    st+=initial[j];
                }
                else
                    break;
            }
            initial = st;

        }
        return initial;
    }
};