class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int arr1[101] = {false};
        int arr2[101] = {false};
        int arr3[101] = {false};

        vector<int>result;
        
        for(auto i : nums1)
            arr1[i] = true;
        for(auto i : nums2)
            arr2[i] = true;
        for(auto i : nums3)
            arr3[i] = true;

        for(int i=1;i<101;i++){
            if(arr1[i]+arr2[i]+arr3[i]>=2){
                result.push_back(i);
            }
        }       
        return result;
        
        
    }
};