class Solution {
public:
    int reverseDegree(string s) {

        int sum = 0;

        for(int i = 1;i<=size(s);i++){
            char element = s[i-1];
            int num = i* (('z' - element)+1);
            sum+=num;
            
        }
        return sum;
        
    }
};