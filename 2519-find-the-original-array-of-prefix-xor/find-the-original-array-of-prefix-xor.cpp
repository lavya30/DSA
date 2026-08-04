class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans(pref.size());
        ans[0] = pref[0];
        for(int i = pref.size()-1;i>0;i--){
            int low = i;
            int high = low-1;
            int val = pref[low] ^ pref[high];
            ans[i] = val;


            
            

        }
        return ans;
        
    }
};