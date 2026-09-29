class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int num = 0;
        int operation = 0;
        for(string it:tokens){
           
            if(it == "+" || it == "-" || it == "/" || it == "*"){
                int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.pop();
                if(it == "+"){
                    operation = n1+n2;
                    s.push(operation);
                }
                else if(it == "-"){
                    operation = n2-n1;
                    s.push(operation);
                }
                else if(it == "*"){
                    operation = n1*n2;
                    s.push(operation);
                }
                else{
                    operation = n2/n1;
                    s.push(operation);
                }
                
            }
            else
                s.push(stoi(it));
        }
        return s.top();
        
    }
};