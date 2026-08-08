class Solution {
private:
    int digitSum(int n){
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
public:
    int countEven(int num) {
        int counter = 0;
        for(int i = 2; i <= num;i++){
            int val = digitSum(i);

            if(i<=num && val%2==0)
                counter++;

        }
        return counter;
    }
};