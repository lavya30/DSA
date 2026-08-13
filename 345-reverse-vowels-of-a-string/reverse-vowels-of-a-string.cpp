class Solution {
bool isVowel(char c) {
  
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }
    return false;
}

public:
    string reverseVowels(string s) {
        
        int low = 0;
        int high = size(s) -1;

        while(low < high){
            bool b1= isVowel(s[low]);
            bool b2= isVowel(s[high]);
            
            if(b1 && b2){
                swap(s[low] , s[high]);
                low++;
                high--;
            }
            else if(true == b1){
                high--;
            } 
            else if(true == b2)
                low++;
            else {
                high--;
                low++;

            }
        }
        return s;
    }
};