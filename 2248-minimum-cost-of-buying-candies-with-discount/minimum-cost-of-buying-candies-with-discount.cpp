class Solution {
public:
    int minimumCost(vector<int>& cost) {

        int sum = 0;
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i =1;i<=cost.size();i++){
            
            if(i % 3 == 0){
                continue;
            }
            sum+=cost[i-1];
        }
        return sum;
        
        
    }
};