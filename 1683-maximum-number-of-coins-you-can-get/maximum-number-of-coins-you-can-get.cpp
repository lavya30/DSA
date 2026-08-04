class Solution {
private:
   
public:
    int maxCoins(vector<int>& piles) {
        int low = 0;
        int next = low+1;
        int high = piles.size()-1;
        int alice= 0;
        int sum = 0;
        int bob =0;
        sort(piles.begin(),piles.end(),greater<int>());
        while(next<high){
            int val1 = piles[low];
            int val2 = piles[next];
            int val3 = piles[high];

            alice+=val1;
            sum+=val2;
            bob+=val3;

            high--;
            low+=2;
            next+=2;
            


        }
        return sum;
    }
};