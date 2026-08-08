class Solution {
public:
    int maxPower(string s) {

        int low = 0;
        int high = 0;
        int maxim = INT_MIN;
        while(high<size(s)){
            if(s[low] ==  s[high]){
                maxim = max(maxim ,(high-low)+1);
               
            }
            else if(s[low]!= s[high])
                low = high;

           high++;
        }

        return maxim;
        
    }
};