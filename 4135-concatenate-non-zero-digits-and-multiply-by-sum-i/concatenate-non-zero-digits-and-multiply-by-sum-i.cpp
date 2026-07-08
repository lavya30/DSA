class Solution {
public:
    long long sumAndMultiply(int n) {
        string result_str = "";
        int sum = 0;

        string num_str =  to_string(n);
        for(int i = 0; i<num_str.size();i++){
            int digit =  num_str[i]-'0';
            if(digit>0){
                result_str+=num_str[i];
                sum+= digit;
            }
        }
        if(sum == 0)
            return 0;
        long long result_int =  stoll(result_str);
        return result_int * sum;
        
        
    }
};