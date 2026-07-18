class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
       
        for(int i = size(s)-1;i>=0;i--){
            if(s[i]==' '){
                if(count>0){
                    break;
                }
                continue;
                
            }
            if(s[i]!=' '){
                count++;
               
            }
           
        }
        return count;
    }
};