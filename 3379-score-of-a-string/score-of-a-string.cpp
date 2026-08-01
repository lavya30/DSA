class Solution {
public:
    int scoreOfString(string s) {
        int low = 0;
        int  high = 1;
        int sum = 0;
        while(high<size(s)){
            int value1 = s[low];
            int value2 = s[high];
            sum = sum+ abs(value1-value2);

            low++;
            high++;

        }
        return sum;
        
    }
};