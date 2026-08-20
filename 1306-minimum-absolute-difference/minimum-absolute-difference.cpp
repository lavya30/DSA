class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        int mini = INT_MAX;
        for(int i= 0;i<arr.size()-1;i++){
            int diff = arr[i+1] -  arr[i];
            if(diff < mini){
                ans.clear();
                ans.push_back({arr[i] , arr[i+1] } );

            }
            else if(diff == mini){
                ans.push_back({arr[i] , arr[i+1] } );
            }

            
            mini = min(mini,diff);
        }
        return ans;
        
    }
};