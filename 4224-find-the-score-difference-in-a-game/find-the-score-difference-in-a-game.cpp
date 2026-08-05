class Solution {
public:
    int scoreDifference(vector<int>& nums) {

        bool player1 = true;
        bool player2 = false;
        int a = 0;
        int b = 0;
        int index = 5;
        for(int i = 0;i<nums.size();i++){
            if(i == index && nums[i]%2==0 && player1){
                b+=nums[i];
                player1 =  false;
                player2=  true;
                index+=6;
            } 
            else if(i==index && nums[i]%2==0 && player2){
                a+=nums[i];
                player2 =false;
                player1 = true;
                index+=6;
            }

            else if(i == index && nums[i]%2!=0 && player1){
                 a+=nums[i];
                 index+=6;
            }
            else if(i == index && nums[i]%2!=0 && player2){
                b+=nums[i];
                 index+=6;
            }
               
            else if(i == index && nums[i]%2==0 && player1){
                a+=nums[i];
                player1 = false;
                player2 =  true;
                index+=6;
            }
            else if(i == index && nums[i]%2==0 && player2){
                b+=nums[i];
                player2 = false;
                player1 = true;
                index+=6;
            }
            
            else if(nums[i]%2!=0 && player1 ){
                b+=nums[i];
                player1 = false;
                player2 = true;
            }
            else if(nums[i]%2!=0 && player2){
                a+=nums[i];
                player2 = false;
                player1 = true;

            }
            else if(nums[i]%2==0 && player1){
                a+=nums[i];
            }
            else if(nums[i]%2==0 && player2){
                b+=nums[i];
            }
           

        }
        return a - b;
    }
};