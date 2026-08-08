class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        string s = to_string(n);
        for(int i = 0;i<size(s);i++){
            string str(1,s[i]);
            if(i%2 == 0 ){
                sum+=stoi(str);
            }
            else
                sum-=stoi(str);
        }
        return sum;
    }
};