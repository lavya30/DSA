class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        bool all = true;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])>d){
                    all =  true;
                }
                else{
                    all = false;
                    break;
                }
            }
            if(all == true) 
                count++;

        }
        return count;
        
    }
};