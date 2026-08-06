class Solution {
public:
    int smallestNumber(int n, int t) {

        int ans;
        for(  int i = n; i<=100;i++){
            int product = 1;
            ans = i;
            while(ans!=0){
                int digit =  ans%10;
                product*=digit;
                ans/=10;
            }
            if(product%t==0)
                return i;
        }
        return 0;
        
    }
};