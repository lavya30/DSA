class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word;
        string ans = "";
        vector<string>temp;
        while( str >> word){
            temp.push_back(word);

        }
        // reverse(temp.begin(),temp.end());
        for(int i = temp.size()-1; i>=0;i--){
            ans+=temp[i]+' ';
        }
        ans.pop_back();

        return ans;
        
    }
};