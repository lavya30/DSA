class Solution {
public:
    int reverseBits(int n) {
        string s = "";
        for (int i = 0; i < 32; i++) {
            char digit = (n % 2 == 0) ? '0' : '1';
            s += digit; 
            n /= 2;
        }
        return stoul(s, nullptr, 2);
        
    }
};