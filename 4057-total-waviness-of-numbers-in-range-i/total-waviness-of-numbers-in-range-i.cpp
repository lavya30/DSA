class Solution {
private:
    int findWaviness(int n ){
        
        int wave = 0;
        string str = to_string(n);
        int siz=  size(str)-2;
        for(int i = 1;i<=siz;i++){
            int low =str[i-1] - '0';
            int mid = str[i] - '0';
            int high =str[i+1] - '0';

            if(mid>low && mid>high){
                wave++;
            }
            else if(mid<low && mid<high)
                wave++;
        }
        return wave;
    }
private:
    int findLength(int n){
        int count = 0;
        while(n>0){
            int digit = n%10;
            count++;
            n/=10;
        }
        return count;
    }
public:
    int totalWaviness(int num1, int num2) {
        int sum = 0;
        for(int i= num1;i<=num2;i++){
            int siz = findLength(i);
            if(siz<3)
                continue;
            int wave =  findWaviness(i);
            sum+=wave;
            
        }
        return sum;
    }
};