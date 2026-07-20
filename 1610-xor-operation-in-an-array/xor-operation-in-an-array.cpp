class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        for(int i =0;i<n;i++){
            int a = start + 2 * i;
            res = res ^a;
        }
        return res;
    }
};