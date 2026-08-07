class Solution {
private:
    int findMax(int n){
        int maxi = 0;
        while(n!=0){
            int digit = n%10;
            maxi = max(maxi , digit);
            n/=10;

        }
        return maxi;
    }
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i< nums.size();i++){
            int maxi = findMax(nums[i]);
            int digit = floor(log10(nums[i]))+1;
            string s = "";
            for(int j = 0;j<digit;j++){
                s+=to_string(maxi);
            }
            sum+=stoi(s);

        }
        return sum;
    }
};