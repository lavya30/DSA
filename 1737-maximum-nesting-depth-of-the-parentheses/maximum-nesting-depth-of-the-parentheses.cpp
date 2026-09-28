class Solution {
public:
    int maxDepth(string s) {
        int maxim = INT_MIN;
        int counter = 0;
        for(auto it:s){
            if(it == '(')
                counter++;
            else if(it == ')')
                counter--;
           
            maxim = max(maxim,counter);
        }
        return maxim;
        
    }
};