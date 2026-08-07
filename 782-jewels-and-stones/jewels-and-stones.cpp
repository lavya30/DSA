class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter = 0;
        for(int i = 0;i<size(jewels);i++){
            char s = jewels[i];
            counter+= count(stones.begin(),stones.end(),s);
        }
        return counter;
        
    }
};