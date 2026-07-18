class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%n==0 && n%2==0){
            return n;
        }
        return n*2;
        
    }
};