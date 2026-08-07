class Solution {
private:
    bool lavya(string s , string allowed){
        int a = 0;
        for(int i = 0;i<size(s);i++){
            if(allowed.find(s[i]) !=string::npos){
                a++;
            }
            
        }
        if(a == size(s))
                return true;
        return false;

    }
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int counter = 0;
        for(int i=0;i<words.size();i++){
            bool flag=  lavya(words[i] , allowed);
            if(flag)
                counter++;

        }
        return counter;

    }
};