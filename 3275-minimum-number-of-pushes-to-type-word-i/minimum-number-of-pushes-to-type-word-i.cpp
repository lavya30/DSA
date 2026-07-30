class Solution {
public:
    int minimumPushes(string word) {
        if(size(word)<=8){
            return size(word);
        }
        int sum = 0;
        int no = 0;
        for(int i=0;i<size(word);i++){
            if(i%8==0){
                no++;
            }
            sum+=no;
        }
        return sum;
        
    }
};