class Solution {
public:
    int findClosest(int x, int y, int z) {


        while(x!=z && y!=z){
            if(x<z)
                x++;
            else
                x--;
            if(y<z)
                y++;
            else 
                y--;
        }
        if(x ==  z && y ==z) 
            return 0;
        else if(x == z)
            return 1;
        return 2;
        
    }
};