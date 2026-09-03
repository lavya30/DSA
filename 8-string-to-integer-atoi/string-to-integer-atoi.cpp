class Solution {
public:
    int myAtoi(string s) {

        int negative = false;

        int i = 0;

        while(i<size(s) && s[i] == ' '){
            

            if(i == size(s))
                return 0;
            i++;
        }
        if(i<size(s) && s[i] == '-'){
            negative  = true;
            i++;

        } 
        else if(i<size(s) && s[i] == '+'){
            i++;
            negative = false;

        }

        long long res = 0;

        for(int j = i; j<size(s);j++){
            if(isdigit(s[j])){
                int num = s[j] - '0';
                res = res*10 + num; 
            }
            else{
                break;
            }
            if(negative && -res < INT_MIN) 
                return INT_MIN;
            else if(!negative && res > INT_MAX) 
                return INT_MAX;
        
        }
        return negative ? -res:res;
        
        
        
        
    }
};