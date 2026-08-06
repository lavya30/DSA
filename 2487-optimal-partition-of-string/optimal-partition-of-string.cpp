class Solution {
public:
    int partitionString(string s) {
        int count = 0;
        char t ='#' ;

        vector<char>temp;
        for(int i= 0;i<size(s);i++){

            
            temp.push_back(t);

            if(find(temp.begin(),temp.end(),s[i]) == temp.end()){
                temp.push_back(s[i]);
            }
            else{
                t = s[i];
                count++;
                temp.clear();
            }
        }
        return count+1;
    }
};