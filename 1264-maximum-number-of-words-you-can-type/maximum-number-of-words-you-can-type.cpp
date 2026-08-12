class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        stringstream str(text);
        string word;
       
        int sum = 0;
        bool flag = true;
        while(str >> word){
            for(auto ch  : brokenLetters){
                flag = true;
                if(word.find(ch) != string::npos){
                    flag= false;
                    break;
                }
            }
            if(flag)
                sum++;
        }
        return sum;
    }
};