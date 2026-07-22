class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        bool negative = false;
        if(num < 0){
            negative = true;
        }
        int number = abs(num);
        string res = "";
        while(number>0){
            res+=to_string(number%7);
            number/=7;
        }
        if(negative){
            res+="-";
        }
        reverse(res.begin(),res.end());
        return res;
        
        
        
    }
};