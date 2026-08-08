class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        stack<int>temp;
        for(int i = 0;i<nums.size();i++){
            int n = nums[i];

           
            while(n!=0){
                int digit = n%10;
                temp.push(digit);
                n/=10;
            }
            int size = temp.size();
            for(int j = 0;j<size;j++){
                
                ans.push_back(temp.top());
                temp.pop();
            }
        }
        return ans;
    }
};