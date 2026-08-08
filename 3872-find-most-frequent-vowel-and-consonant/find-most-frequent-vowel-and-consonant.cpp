class Solution {
public:
    int maxFreqSum(string s) {

        vector<int>vowel(26,0);
        vector<int>consonant(26,0);
        for(int i = 0;i<size(s);i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                int val1 = s[i] - 'a';
                vowel[val1]++;        
            }
            else{
                int val2 = s[i] - 'a';
                consonant[val2]++; 

            }
        }
        sort(vowel.begin(),vowel.end() ,greater<int>());
        sort(consonant.begin(),consonant.end(), greater<int>());
        return vowel[0] + consonant[0];
        
    }
};