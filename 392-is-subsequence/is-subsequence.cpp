class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;

        while(sp<size(s) && tp<size(t)){
            if(s[sp] == t[tp]){
                sp++;
            }
            tp++;

        }
        return sp == size(s);
    }
};