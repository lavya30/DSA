class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";

        for(int i = 0; i<size(s); i++){
            temp+=to_string((s[i] - 'a')+1);
        }
        int sum = 0;
        for(int i = 0;i<k; i++){
            sum = 0;
            for(int j = 0; j<size(temp); j++){
                sum+= temp[j] - '0';
            } 
            temp = to_string(sum);
        }


        return stoi(temp);
       



        
    }
};