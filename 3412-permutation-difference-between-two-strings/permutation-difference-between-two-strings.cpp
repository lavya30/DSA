class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0;
        for(int i = 0;i<size(s);i++){
            char ch =  s[i];
            int index = t.find(ch);
            sum+=abs(index - i);
            
        }

        // unordered_map<char,int>hash1;
        // for(int i = 0;i<size(s);i++){
        //     hash1[s[i]] = i;
        // }
        // int sum = 0;
        // for(int i = 0;i<size(t);i++){
        //     int index = hash1[t[i]];
        //     sum+=abs(i-index); 
        // }
        return sum;
        
    }
};