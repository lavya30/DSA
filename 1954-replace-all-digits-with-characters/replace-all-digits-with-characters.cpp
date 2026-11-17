class Solution {
public:
    string replaceDigits(string s) {
        // string ans = "";
        
        // for(int i = 0;i<size(s);i=i+2){
        //     ans+=s[i];
        //     int num = s[i+1] - '0';
        //     char ch = s[i] + num;
        //     ans+=ch;
        // }
        // if(size(s) %2 == 0)
        //     return ans;
        // ans.pop_back();
        // return ans;
        for (int i = 1; i < s.size(); i += 2) {
            s[i] = s[i - 1] + (s[i] - '0');
        }

        return s;
    }
};