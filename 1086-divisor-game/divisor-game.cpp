class Solution {
public:
    bool divisorGame(int n) {
        if(n == 1)  
            return false;
        int count = 0;

        while(n!=1){
            count++;
            if(n %2 ==0)    
                n--;
            else{
                for(int i = n;i>=1;i = i-2){
                    if(i<n  && n % i == 0) {
                        n-=i;
                        break;

                    }
                }
            }

        }
        return count %2 !=0 ? true :false;
        
    }
};