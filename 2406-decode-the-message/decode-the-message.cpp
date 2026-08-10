class Solution {
public:
    string decodeMessage(string key, string message) {

        int counter = 0;
        unordered_map<char,char>hash;
        for(int i = 0;i<size(key);i++){
    ;
            if(hash.find(key[i]) == hash.end() && key[i] !=' '){
                hash[key[i]] = 'a' + counter;
                counter++;
            }   
                
        }
        string s = "";
        for(int i = 0;i<size(message); i++){
            if(message[i] == ' ')
                s+=' ';
            else 
                s+=hash[message[i]];
        }
        return s;


        
    }
};