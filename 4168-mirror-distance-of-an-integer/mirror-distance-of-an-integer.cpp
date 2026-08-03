class Solution {
public:
    int mirrorDistance(int n) {
        string str = to_string(n);
        reverse(str.begin(),str.end());
        int i = stoi(str);
        return abs(n-i);
        
    }
};