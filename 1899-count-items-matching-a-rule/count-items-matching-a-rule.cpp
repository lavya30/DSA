class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int row = items.size();
        int col = items[0].size();
        int counter = 0;
        int index= 0;
        if(ruleKey == "type")
            index = 0;
        else if(ruleKey == "color")
            index = 1;
        else 
            index = 2;
        
        for(int i = 0 ;i<row;i++){
                if(items[i][index] == ruleValue)
                    counter++;
            
        }
        return counter;
    }
};