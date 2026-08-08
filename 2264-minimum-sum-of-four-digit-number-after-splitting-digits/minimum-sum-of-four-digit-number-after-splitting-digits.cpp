class Solution {
public:
    int minimumSum(int num) {

        vector<int>temp;
        while(num!=0){
            temp.push_back(num%10);
            num/=10;
        }
        sort(temp.begin(),temp.end());

        int low = 0;
        int high = temp.size()-1;
        
        int sum = 0;
            while(low<high){
            int ans = (temp[low]*10) + (temp[high]);
            sum+=ans;

            low++;
            high--;
        }
        return sum;
    }
};