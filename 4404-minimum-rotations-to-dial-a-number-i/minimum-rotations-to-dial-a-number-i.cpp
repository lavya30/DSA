class Solution {
public:
    int minRotations(string s) {
        int current = 0;
        int rot = 0;
        int diff = 0;
        for(auto c:s){
            int it = c - '0';
            diff = abs(current - it);
            rot+=min(diff , 10-diff);
            current = it;
        }
        return rot;
    }
};