class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<int>temp;

        for(int i = size(s)-1;i>=0;i--){
            if(s[i] != ' '){
                temp.push_back(s[i]);

            }
            else if(s[i] == ' ' && !temp.empty()){
                break;
            }

        }
        return temp.size();
    }
};