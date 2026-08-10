class Solution {
public:
    int countAsterisks(string s) {
        if(s.find('*') == string::npos)
            return 0;
        int counter = 0;
        int c = 0;
        for(int i = 0; i<size(s);i++){
            if(s[i] == '|')
                c++;
            if(c%2 == 0){
                if(s[i] == '*')
                    counter++;
            }
        }
        return counter;
        
    }
};