class Solution {
public:
    int minPartitions(string n) {
        int maxim = INT_MIN;
        for(char c:n){
            int it = c - '0';
            maxim = max(maxim, it);
            
        }
        return maxim;
        
    }
};