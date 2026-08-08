class Solution {
public:
    string sortSentence(string s) {

        vector<string>temp(10,"");

        stringstream ss(s);
        string word;
        while(ss >> word){
            char ch = word.back();
            int index = ch - '0';
            word.pop_back();
            temp[index] = word+" ";
        }
        string ans = "";
        for(int i = 1;i<temp.size();i++){
            ans+=temp[i];
        }
        ans.pop_back();
        return ans;

        
    }
};