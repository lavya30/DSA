class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans = "";
        int ptr1 = 0;
        int ptr2 = 0;

        while(ptr1 < size(word1) || ptr2 < size(word2)){
            if(ptr1 < size(word1)){
                ans+=word1[ptr1];
                ptr1++;

            }
            if(ptr2 < size(word2) ){
                ans+= word2[ptr2];
                ptr2++;
            
            }
        }
        return ans;
        
    }
};