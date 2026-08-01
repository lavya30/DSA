class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<char,int>hash;
        int sum = 0;
        string str = to_string(n);
        for(int i =0;i<size(str);i++){
            hash[str[i]]++;
        }
        for(auto it:hash){
            int val1 = it.first - '0';
            int val2 = it.second;
            sum = sum +(val1*val2);
        }

        return sum;
    }
};