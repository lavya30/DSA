class Solution {
public:
    int minOperations(int n) {
        vector<int>arr;
        for(int i = 0;i<n;i++){
            arr.push_back((i*2)+1);
        }        
        int mid = arr[n/2];
        int sum = 0;
      
        for(int i = 0;i<arr.size();i++){
            sum+=abs(mid -  arr[i]);
        }
        return sum/2;

    }
};