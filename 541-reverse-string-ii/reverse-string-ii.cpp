class Solution {
public:
    string reverseStr(string s, int k) {
        if(size(s) == 1)
            return s;

        for(int i = 0;i<size(s);i=i+2*k){
            if(size(s) - i <k)
                reverse(s.begin()+i,s.end());
            else if(size(s) - i <2*k || size(s) -i >=k){
                reverse(s.begin()+i,s.begin()+k+i);
            }
        }
        return s;
    }
};