class Solution {
private:
    char hashing(int low , int high , string s){
        int sum = 0;
        for(int i = low; i<=high;i++){
            int val = s[i] - 'a';
            sum+=val;

        }
        int hash =  sum %26;
        return (char)(hash + 'a');
    }
public:
    string stringHash(string s, int k) {

        string result = "";

        int low  = 0;
        int high = low+k-1;
        while(high<size(s)){
            char  ch = hashing(low,high,s);

            result+=ch;
            low+=k;
            high+=k;
        }
        return result;
    }
};