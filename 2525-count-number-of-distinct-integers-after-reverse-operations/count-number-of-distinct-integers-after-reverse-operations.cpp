class Solution {
private:
    int reverseNum(int n){
        while(n>0 && n%10==0)
            n/=10;
        int rev = 0;
        while(n!=0){
            int digit = n%10;
            rev = (rev*10)+digit;
            n/=10;
        }
        return rev;
//         string s = to_string(rev);
//         for(int i = 0;i<size(s);i++){
//             if(s[i]==0){
//                   s.erase(s.begin() + i); 
//             }
//             else
//                 break;
//         }
//         return stoi(s);
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>ans;
        for(int i= 0;i<nums.size();i++){
            ans.insert(nums[i]);
            int val = reverseNum(nums[i]);
            ans.insert(val);
        }

        // for(int i = 0;i<nums.size();i++){

        //     int val = reverseNum(nums[i]);
        //     ans.insert(val);
        // }
        return ans.size();
        
    }
};