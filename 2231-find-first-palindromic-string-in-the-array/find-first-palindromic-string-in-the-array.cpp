class Solution {
private:
    bool isPalindrome(string s){
        int low = 0;
        int high = size(s)-1;
        while(low<high){
            if(s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {

        for(int i = 0;i<words.size();i++){
            string s= words[i];
            if(isPalindrome(s))
                return words[i];
        }
       
        // for(int i = 0; i<words.size();i++){
        //     string s = words[i];
        //     reverse(s.begin(),s.end());
        //     if(s ==  words[i])
        //         return words[i];

        // }
        return "";
    }
};