class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        bool found =  false;
       
        unordered_map<int,int>hash2;
        for(int i = 0;i<nums2.size();i++){
            hash2[nums2[i]] = i;
        }
        for(int i= 0;i<nums1.size();i++){
            found =  false;
            int index = hash2[nums1[i]];

            for(int j = index;j<nums2.size();j++){
                if(nums1[i]<nums2[j]){
                    ans.push_back(nums2[j]);
                    found = true;
                    break;
                }
            }
            if(found == false)
                ans.push_back(-1);
        }
       
        return ans;
        
    }
};