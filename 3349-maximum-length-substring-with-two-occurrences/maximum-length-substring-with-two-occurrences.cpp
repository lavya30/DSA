class Solution {
public:
    int maximumLengthSubstring(string s) {

        int low = 0;
        int high = 0;
        unordered_map<char,int>hash;
        int maxim = INT_MIN;
        while(high<size(s)){
            hash[s[high]]++;
            while(hash[s[high]] > 2){
                hash[s[low]]--;
                low++;
            }
            int len = high+1-low;
            maxim = max(maxim , len);
            high++;
        }
        return maxim;
        
    }
};