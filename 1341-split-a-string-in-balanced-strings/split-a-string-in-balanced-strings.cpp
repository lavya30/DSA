class Solution {
public:
    int balancedStringSplit(string s) {

        int low = 0;
        int high = 0;
        int r = 0;
        int l = 0;
        int counter = 0;
        while(high<size(s)){
            if(s[high] == 'R')
                r++;
            else
                l++;

            
            if(r == l)
                counter++;

            high++;
        }
        return counter;
    }
};