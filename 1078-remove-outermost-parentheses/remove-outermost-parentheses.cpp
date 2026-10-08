class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        stack<char>st;
        for(char ch:s){
            if(ch == ')')
                st.pop();
            if(!st.empty())
                str.push_back(ch);
            if(ch == '(')
                st.push(ch);
        }
        return str;
        
    }
};