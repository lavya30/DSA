class Solution {
public:
    int minBitFlips(int start, int goal) {
        int counter = 0;
        bitset<30>a(start);
        bitset<30>b(goal);

        string str1 = a.to_string();
        string str2 = b.to_string();

        for(int i =0;i<size(str1);i++){
            if(str1[i] != str2[i])
                counter++;
        } 
        
       
     
        return counter;


        
        
    }
};