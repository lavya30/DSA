class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)
            return false;
        bool alice = true;
        bool bob = false;
        int num = 10;
        while(n>=num){
            if(alice){
                n-=num;

                alice = false;
                bob= true;
            }   
            else{
                n-=num;
                alice =  true;
                bob = false;

            }
            num--;

        }
        
        return bob;
    }
};