class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>hash1;
        for(int i = 0;i<size(s);i++){
            hash1[s[i]] = i;
        }
        int sum = 0;
        for(int i = 0;i<size(t);i++){
            int index = hash1[t[i]];
            sum+=abs(i-index); 
        }
        return sum;
        
    }
};