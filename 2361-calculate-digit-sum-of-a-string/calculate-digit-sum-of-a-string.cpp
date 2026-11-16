class Solution {
private:
    string dig(string n){
        int sum = 0;
        for(char c: n){
            sum+= c -'0';
        }
        return to_string(sum);
    }
public:
    string digitSum(string s, int k) {
        
        while(size(s)>k){
            string s2 = "";
            string s1 = "";
            
            int counter = 0;
            for(int i = 0;i<size(s);i++){
                s1+=s[i];
                counter++;
                
                if(counter%k==0 || counter == size(s)){
                    s2+=dig(s1);
                    s1 = "";
                }
            }
            s = s2;

        }
        return s;
    }
};