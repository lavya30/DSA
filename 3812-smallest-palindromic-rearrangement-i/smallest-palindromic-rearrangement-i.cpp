class Solution {
public:
    string smallestPalindrome(string s) {
        string half = s.substr(0,size(s)/2);
        sort(half.begin(),half.end());
        string rev_half = half;
        reverse(rev_half.begin(),rev_half.end());
        string mid = "";
        if(size(s)%2!=0){
            mid = s[size(s)/2];
        }

        return half+mid+rev_half;
      
    }
};