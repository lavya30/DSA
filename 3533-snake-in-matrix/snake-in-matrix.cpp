class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ans = 0;
        for(int i = 0;i<commands.size();i++){
            if(commands[i] == "RIGHT"){
                ans+=1;
            }
            else if(commands[i]== "DOWN"){
                ans+=n;
            }
            else if(commands[i]== "LEFT"){
                ans-=1;
            }
            else if(commands[i] == "UP"){
                ans-=n;
            }
        }


        // vector<vector<int>> grid(n, vector<int>(n));

    //     for(int i = 0;i<n;i++){
    //         for(int j = 0;j<n;j++){
    //             grid[i][j] = (i*n)+j;
    //        }
    //    }
    //    int ans = 0;
    //    int row = 0;
    //    int column = 0;

    //    for(int i = 0;i<commands.size();i++){
    //     if(commands[i] == "RIGHT"){
    //         column++;
    //         ans = grid[row][column];
    //     }
    //     else if(commands[i] == "LEFT"){
    //         column--;
    //         ans = grid[row][column];
    //     }
    //     else if(commands[i] == "UP"){
    //         row--;
    //         ans= grid[row][column];
    //     }
    //     else if(commands[i] == "DOWN"){
    //         row++;
    //         ans =  grid[row][column];
    //     }
    //    }
       return ans;
        
    }
};