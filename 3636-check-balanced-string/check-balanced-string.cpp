class Solution {
public:
    bool isBalanced(string num) {
        int ans = 0;
        for(int i = 0;i<size(num); i++){
            string str(1 , num[i]);

            if(i%2 == 0)
                ans+=stoi(str);
            else
                ans-=stoi(str);
        }
        return ans == 0;
    }
};