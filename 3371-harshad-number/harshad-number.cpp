class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        if(x<10)
            return x;
        int sum = 0;
        int num = x;
        while(x!=0){
            int digit = x%10;
            sum = sum+ digit;
            x/=10;
        }
        if(num%sum == 0)
            return sum;
        return -1;
        
    }
};