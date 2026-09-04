class Solution {
public:
    bool areNumbersAscending(string s) {

        stringstream ss(s);
        string word;
        int prev = 0;
        int current = 0;
        while(ss >> word){
            if(isdigit(word[0])){
                current = stoi(word);
                if(current> prev){
                    prev = current;
                }
                else
                    return false;
            }
        }
    return true;
    }
};