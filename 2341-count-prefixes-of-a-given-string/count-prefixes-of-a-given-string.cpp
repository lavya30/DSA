class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {

        int counter = 0;
       
        for(int i = 0;i<words.size();i++){
            if(words[i].size()>size(s)){
                continue;
            }
            if(s.find(words[i]) == 0)
                counter++;
        }
        return counter;
    }
};