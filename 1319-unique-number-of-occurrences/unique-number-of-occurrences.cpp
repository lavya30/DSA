class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>hash;
        for(auto it: arr){
            hash[it]++;
        }
        unordered_set<int>temp;
        for(auto it: hash){
            if(find(temp.begin(),temp.end(),it.second) == temp.end()){
                temp.insert(it.second);


            }
            else
                return false;

        }
        return true;
    }
};