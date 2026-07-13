class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int k = numbers.size()-1;
        int i =0;
        while(i<=k){
            if(numbers[i]+numbers[k]==target){
                return {i+1,k+1};
            }
            else if(numbers[i]+numbers[k]>target){
                k--;
            }
            else{
                i++;
            }
        }
        return {-1};
        
    }
};