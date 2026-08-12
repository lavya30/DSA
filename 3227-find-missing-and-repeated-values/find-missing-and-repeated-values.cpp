class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

     
  
        int row  =  grid.size();
        int col = grid[0].size();
        vector<int>hash(row*row+1,0);

        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                hash[grid[i][j]]++;
            }
        }
       int repeat = -1;
       int miss = -1;
        for(int i = 1;i<hash.size();i++){
            if(hash[i] == 2)
                repeat = i;
            else if(hash[i] == 0)
                miss = i;
        }
        


        return {repeat , miss};
    }
};