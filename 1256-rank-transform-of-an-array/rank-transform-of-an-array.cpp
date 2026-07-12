class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>result;
        vector<int>sorted = arr;
        int count = 1;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int>hash;
        for(int i=0;i<sorted.size();i++){
            if(hash.find(sorted[i])==hash.end()){
                hash[sorted[i]] = count++; 
            }
        }
        for(int num : arr ){
            result.push_back(hash[num]);
        }
        return result;



        

        // for(int i=0;i<arr.size();i++){
        //     vector<int>his;
    
        //     int count = 1;
        //     for(int j=0;j<arr.size();j++){
        //         if(find(his.begin(),his.end(),arr[j])!=his.end()){

        //         }

        //         else if(arr[i]>arr[j]){
        //             count++;
        //         }
        //         his.push_back(arr[j]);
        //     }
        //     result.push_back(count);
        // }
        // return result;
        
    }
};