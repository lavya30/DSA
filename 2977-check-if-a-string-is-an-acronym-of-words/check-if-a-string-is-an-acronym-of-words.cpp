class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {

        // string str = "";
        // for(int i = 0;i<words.size();i++){
        //     string temp = words[i];
        //     string ch(1,temp[0]);
        //     str+=ch;
        // }
        // return str == s;
        if(words.size() != size(s))
            return false;

        for(int i = 0;i<words.size();i++){
            if(words[i][0] != s[i])
                return false;
            
        }
        return true;
    }
};