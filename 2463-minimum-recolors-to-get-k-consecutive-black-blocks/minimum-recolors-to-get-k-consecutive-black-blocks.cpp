class Solution {
public:
    int minimumRecolors(string blocks, int k) {

       int low = 0;
       int high = low +k;
       int mini = INT_MAX;
       while(high<=size(blocks)){
        int val =  count(blocks.begin()+low,blocks.begin()+high,'W');
        if(val == 0)    
            return 0;
        else
            mini = min(mini , val);
        low++;
        high++;

       }
       return mini;
        
    }
};