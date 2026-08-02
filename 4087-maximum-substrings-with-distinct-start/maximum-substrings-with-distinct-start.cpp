class Solution {
public:
    int maxDistinct(string s) {
        set<char>hash;
        for(int i = 0;i<size(s);i++){
            hash.insert(s[i]);
        }
        return hash.size();
        
    }
};