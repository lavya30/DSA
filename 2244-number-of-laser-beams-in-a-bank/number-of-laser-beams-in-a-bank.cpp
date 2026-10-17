class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum = 0;
        vector<int>ones;
        int counter = 0;
        for(int i = 0;i<bank.size();i++){
           counter = count(bank[i].begin(),bank[i].end(),'1');
           if(counter !=0)
                ones.push_back(counter);
        }
        if(ones.size() <= 1)
            return 0;
        for(int i = 0;i<ones.size()-1;i++){
            sum = (sum + (ones[i] * ones[i+1]));
        }
        
        return sum;
        
    }
};