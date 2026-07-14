class Solution {
    bool digits(int i){
        int dum = i;
        bool res = false;
        while(i!=0){
            int rem = i%10;
            if(rem == 0)
                return false;
            if(dum%rem==0){
                res = true;
            }
            else{
                res = false;
                break;
            }
            i= i/10;

            

        }
        return res;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int>result;
        for(int i = left; i<=right;i++){
           
            if( digits(i) == true){
                result.push_back(i);
            }
        }
        return result;
    }
};