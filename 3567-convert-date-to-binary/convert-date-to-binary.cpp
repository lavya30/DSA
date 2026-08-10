class Solution {
public:
    string convertDateToBinary(string date) {

        string ans = "";
        string s = "";
        string temp = "";

        for(int i = 0; i<size(date); i++){
            if(date[i]!='-')
                s+=date[i];
        
            if(date[i+1] == '-' || i == size(date)-1){
                int n = stoi(s);
                while(n!=0){
                    temp+=to_string(n%2);
                    n/=2;
                }
                reverse(temp.begin(),temp.end());
                s = "";
                ans+=temp+'-';
                temp = "";
            }
        }
        ans.pop_back();
        return ans;
        
    }
};