class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        int counter = 0;
        for(int i = 0;i<words.size()-1;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            for(int j = i+1;j<words.size();j++){
                if(words[j] == rev){
                    counter++;
                    break;

                }


            }
        }
        return counter;
    }
};