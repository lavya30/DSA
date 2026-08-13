class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxim  = INT_MIN;
        int sum = 0;
        for(int i = 0;i<gain.size();i++){
            sum+=gain[i];
            maxim = max(maxim,sum);
        }
        if(maxim<0)
            return 0;
        return maxim;
        
    }
};