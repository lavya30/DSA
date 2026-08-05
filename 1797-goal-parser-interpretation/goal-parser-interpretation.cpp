class Solution {
public:
    string interpret(string command) {
        int low = 0;
        int high = low+1;
        string s = "";
        for(int i= 0;i<size(command);i++){
            if(command[low]=='G')
                s+='G';
            else if(command[low]=='(' && command[high]==')')
                s+='o';
            else if(command[low]=='a' && command[high]=='l')
                s+="al";

                low++;
                high++;
        }
        return s;
        
    }
};