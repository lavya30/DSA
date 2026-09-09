class Solution {
public:
    int countCommas(int n) {
        if(floor(log10(n)) +1 <4){
            return 0;
        }

        return (n-1000)+1;
    }
};