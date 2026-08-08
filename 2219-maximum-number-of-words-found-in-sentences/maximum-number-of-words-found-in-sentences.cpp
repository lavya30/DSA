class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxim  = 0;
        

        for(int i = 0;i<sentences.size();i++){
            int counter = 0;
            string s = sentences[i];

            for(int j = 0; j<size(s);j++){
                if(s[j] == ' ')
                    counter++;
            }
            maxim = max(maxim, counter);
        }
        return maxim+1;
    }
};