class Solution {
public:
    int myAtoi(string s) {
        bool negative =  false;
        int j =0;
        int i = 0;
        string s1 = "";
        while(i<size(s) && s[i]==' '){
            j++;
            i++;
            if(i == size(s))
                return 0;
        }
        if(s[j]=='-'){

            i++;
            j++;
            negative  =  true;
        }
        else if(i<size(s) && s[j]=='+'){
            negative = false;
            i++;
            j++;
        }
        long long res = 0;
        for(int k = i;i<size(s);i++){
            if(isdigit(s[i])){
                int digit = s[i]-'0';
                res = res*10+digit;
            }
            else 
                break;
            if (negative && -res < INT_MIN) return INT_MIN;
            if (!negative && res > INT_MAX) return INT_MAX;
        }
        
        return negative ? -res : res;
    }
};