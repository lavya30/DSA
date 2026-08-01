class Solution {
private:
    bool palindrome(string num){
        string n = num;
        reverse(n.begin(),n.end());
        return n == num;
    }
private:
    string converttobase(int n,int base){
        string sum = "";
        while(n>0){
            sum+=to_string(n%base);
            n = n/base;
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
public:
    bool isStrictlyPalindromic(int n) {
        int i = 2;
        bool ispalindrome = true;
        while(i<n){
            string result = converttobase(n,i);
            ispalindrome = palindrome(result);
            if(ispalindrome == false){
                return false;
            }
            i++;
           
        }
        return ispalindrome;
        
    }
};