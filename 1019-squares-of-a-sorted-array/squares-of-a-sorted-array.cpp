class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>result(nums.size());
        int left = 0;
        int right = nums.size()-1;

        for(int i=nums.size()-1;i>=0;i--){

            int leftvalue = nums[left]*nums[left];
            int rightvalue = nums[right]*nums[right];

            if(leftvalue>rightvalue){
                result[i] = leftvalue;
                left++;
            }
            else{
                result[i] = rightvalue;
                right--;
            }

        }
       
        // vector<int>neg;
        // vector<int>pos;
        // vector<int>result;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         neg.push_back(nums[i]*nums[i]);
        //     }
        //     else{
        //         pos.push_back(nums[i]*nums[i]);
        //     }

        // }
        // int i = neg.size()-1;
        // int j = 0;

        // while(i>=0 && j<pos.size()){
        //     if(neg[i]<pos[j]){
        //         result.push_back(neg[i]);
        //         i--;
        //     }
        //     else{
        //         result.push_back(pos[j]);
        //         j++;
        //     }
        // } 
        // while(i>=0){
        //     result.push_back(neg[i]);
        //     i--;
        // }
        // while(j<pos.size()){
        //     result.push_back(pos[j]);
        //     j++;
        // }
        return result;
    }
};