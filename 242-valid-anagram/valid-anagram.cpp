class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>hash1;
        if(size(s)!=size(t)){
            return false;
        }
        for(int i=0;i<size(s);i++){
            hash1[s[i]]++;
        }
         for(int i=0;i<size(t);i++){
            hash1[t[i]]--;
        }
        for(auto it:hash1){
            if(it.second>0){
                return false;
            }
        }
        return true;
    }
};