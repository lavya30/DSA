class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int even = 0;
        int odd = 0;
        for(int i= 0;i<n;i++){
            if(nums[i]%2==0)
                even++;
            else
                odd++;
            }
        ans.insert(ans.begin(),even,0);
        ans.insert(ans.end(),odd,1);
        return ans;
    }

       
    };
