class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>hash1;
        unordered_map<char,int>hash2;
        for(int i=0;i<size(s);i++){
            hash1[s[i]]++;
        }
         for(int i=0;i<size(t);i++){
            hash2[t[i]]++;
        }
        return hash1==hash2;
    }
};