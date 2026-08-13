class Solution {
public:
    double trimMean(vector<int>& arr) {

        sort(arr.begin(),arr.end());

        int n = arr.size()/20;
        double sum = 0;
        for(int i = n; i< arr.size()-n; i++){
            sum+=arr[i];
        }
       int elements_kept = arr.size() - (2 * n);
        return sum / elements_kept;
    }
};