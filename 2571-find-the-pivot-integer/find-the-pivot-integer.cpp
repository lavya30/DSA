class Solution {
public:
    int pivotInteger(int n) {
        int sum1  = 1;
        int sum2 = n;
        int low = 1;
        int high = n;

        while(high>low){
            if(sum1<sum2){
                low++;
                sum1+=low;
            }
            else if(sum2>sum1){
                high--;
                sum2+=high;

            }
            else{
                low++;
                high--;
                sum1+=low;
                sum2+=high;
            }
            
           

        }
        if(sum1 == sum2)
            return high;
        return -1;
        
    }
};