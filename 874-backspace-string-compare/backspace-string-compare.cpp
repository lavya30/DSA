class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char>stack1;
        stack<char>stack2;

        for(int i = 0;i<size(s);i++){
            if(s[i]!='#'){
                
                stack1.push(s[i]);
            }
            else{

           
                if(stack1.empty())
                    continue;
                stack1.pop();
                 }
        }
        for(int i = 0;i<size(t);i++){
            
            if(t[i]!='#'){
                
                stack2.push(t[i]);
            }
            else{

           
                if(stack2.empty())
                    continue;
                stack2.pop();
                 }
        }

        return stack1 == stack2;
        
    }
};