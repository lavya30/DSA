class Solution {
private:
    int findMax(int n){
        string s = "";
        int maxi = 0;
        while(n!=0){
            int digit = n%10;
            maxi = max(maxi , digit);
            n/=10;
            s+='1';

        }
        
        return maxi * stoi(s);
    }
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i< nums.size();i++){
            int maxi = findMax(nums[i]);
     
            sum+=maxi;
           


        }
        return sum;
    }
};