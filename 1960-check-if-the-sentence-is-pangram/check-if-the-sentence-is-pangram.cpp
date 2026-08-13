class Solution {
public:
    bool checkIfPangram(string sentence) {
       

        vector<bool>hash(26,false);

        for(int i = 0;i<size(sentence); i++){
            hash[sentence[i] - 'a'] =  true;
        }
        if(find(hash.begin(), hash.end() , false) !=hash.end()){
            return false;
        }
        return true;
    }
};