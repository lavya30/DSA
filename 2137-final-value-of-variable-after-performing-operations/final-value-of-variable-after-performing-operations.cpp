class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int i =0;i<operations.size();i++){
            string s = operations[i];
            if(s[0] == '+' || s[2]=='+' ){
                ans++;
            }
            else
                ans--;
        }
        return ans;
    }
};