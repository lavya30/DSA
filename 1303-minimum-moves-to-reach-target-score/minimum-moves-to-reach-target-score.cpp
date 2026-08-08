class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if(maxDoubles == 0)
            return target-1;
        int counter = 0;
        while(target>1 ){
            if(target%2==0 && maxDoubles!=0){
                target/=2;
                maxDoubles--;
             
            }
            else
                target--;
           
            counter++;
        }
        return counter;
        
    }
};