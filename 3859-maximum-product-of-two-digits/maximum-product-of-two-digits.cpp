class Solution {
public:
    int maxProduct(int n) {
        string num =  to_string(n);
        
        int first = 0;
        int sec = 0;

        for(int i = 0;i<size(num);i++){
            int number =  num[i] - '0';
            if(number>=first){
                sec =  first;
                first = number;
            }
            else if(number>sec){
                sec = number;
            }
            
        }
        return first*sec;
    }
};