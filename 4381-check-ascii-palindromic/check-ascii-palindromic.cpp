class Solution {
private:
    bool isPalindrome(bitset<8> bin1, bitset<8> bin2){

    
        for(int i = 0; i<8;i++){
            if(bin1[i] != bin2[7-i]){
                return false;
            }
           
        }
        return true;
    }

public:
    bool isPalindromic(string s) {
      int  low = 0;
      int high = size(s)-1;
      bool flag = true;

      while(low<=high){
        int val1 = s[low];
        int val2 = s[high];
        bitset<8>bin1(val1);
        bitset<8>bin2(val2);

        flag = isPalindrome(bin1,bin2);
        if(flag == false)
            return flag;

        low++;
        high--;


      }
      return true;
    }
};