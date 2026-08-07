class Solution {
public:
    int findClosest(int x, int y, int z) {

        int val1 = abs(z-x);
        int val2 =  abs(z-y);

        if(val1<val2)
            return 1;
        else if(val2<val1)
            return 2;
        else return 0;



        // while(x!=z && y!=z){
        //     if(x<z)
        //         x++;
        //     else
        //         x--;
        //     if(y<z)
        //         y++;
        //     else 
        //         y--;
        // }
        // if(x ==  z && y ==z) 
        //     return 0;
        // else if(x == z)
        //     return 1;
        // return 2;
        
    }
};