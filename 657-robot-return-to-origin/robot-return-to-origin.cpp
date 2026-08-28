class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int>hash;

        for(int i = 0;i<size(moves);i++){
            hash[moves[i]]++;
        }
        if(hash['L'] == hash['R'] && hash['U'] == hash['D'])
            return true;
        
        return false;
    }
};