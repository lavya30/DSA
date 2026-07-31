class Solution {
public:
    int minimumPushes(string word) {
        int no = 0;
        int sum = 0;
       
        unordered_map<char,int>hash;
        for(int i = 0;i<size(word);i++){
            hash[word[i]]++;
        }
        vector<pair<char, int>> vec(hash.begin(), hash.end());

        
        sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        for(int i =0;i<vec.size();i++){
            if(i%8==0){
                no++;
            }
            sum = sum + vec[i].second*no;
        }
        return sum;
    }
};