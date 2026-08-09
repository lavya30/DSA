class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        vector<int>ans;
       
        for(int i = 0;i<A.size();i++){
            int counter = 0;
            vector<int>temp(A.begin(),A.begin()+i+1);
            for(int j =0;j<=i;j++){
                if(find(temp.begin(),temp.end(),B[j]) != temp.end()){
                    counter++;
                }
            }
            ans.push_back(counter); 
        }
        return ans;
    }
};