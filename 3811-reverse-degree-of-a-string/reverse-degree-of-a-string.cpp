class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        int product = 0;
        for(int i= 0;i<size(s);i++){
            int val = abs((s[i] - 'z'))+1;
            product= val*(i+1);
            sum+=product;
        }
        return sum;
        
    }
};