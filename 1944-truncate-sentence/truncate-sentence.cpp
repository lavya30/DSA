class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        vector<string>words;
        string word;

        while(ss >> word && k!=0){
            words.push_back(word);
            k--;
        }
        string ans  = "";
        for(int i = 0;i<words.size();i++){
            if(i != words.size()-1)
                ans+=words[i]+" ";
            else
                 ans+=words[i];
        }

    return ans;
        
    }
};