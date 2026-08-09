class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>ans;

        vector<int>perm;
        for(int i =1;i<=m;i++){
            perm.push_back(i);
        }
        for(int i = 0; i<queries.size();i++){
            int val =  queries[i];
            int index = 0;
            for(int j =0;j<perm.size();j++){
                if(perm[j] ==  val){
                    index = j;
                    break;
                }
            }
            ans.push_back(index);
            perm.erase(perm.begin()+index);
            perm.insert(perm.begin(),val);

        }
        return ans;
    }
};