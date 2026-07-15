class Solution {
public:
    bool digitCount(string num) {
        
        
        unordered_map<int,int>hash;
        for(int i=0;i<size(num);i++){
            int digit = num[i] - '0';
            hash[digit]++;
        }      
        for(int i=0;i<size(num);i++){
             int digit = num[i] - '0';
            if(hash[i]!=digit){
                return false;
            }
            
        }
        return true;;
    }
};