class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.size()==1){
            return {nums[nums.size()-1]*nums[nums.size()-1]};
        }
       
        vector<int>neg;
        vector<int>pos;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]*nums[i]);
            }
            else{
                pos.push_back(nums[i]*nums[i]);
            }

        }
        int i = neg.size()-1;
        int j = 0;

        while(i>=0 && j<pos.size()){
            if(neg[i]<pos[j]){
                result.push_back(neg[i]);
                i--;
            }
            else{
                result.push_back(pos[j]);
                j++;
            }
        } 
        while(i>=0){
            result.push_back(neg[i]);
            i--;
        }
        while(j<pos.size()){
            result.push_back(pos[j]);
            j++;
        }
        return result;
    }
};