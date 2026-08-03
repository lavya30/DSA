class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>temp =nums;
        int n = nums.size();
        temp.insert(temp.end(),nums.begin(),nums.end());
        reverse(temp.begin()+n,temp.end());
        return temp;
        
    }
};