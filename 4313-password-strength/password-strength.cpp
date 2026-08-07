class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        unordered_map<char ,int>hash;
        for(int i =0;i<size(password);i++){
            hash[password[i]]++;
        }

        for(auto it:hash){
            int ascii = int(it.first);
            if(ascii>=48 && ascii<=57){ //digits
                ans+=3;
            } 
            else if(ascii >=97 && ascii<=122){ //a-z
                ans+=1;
            }
            else if(ascii>=65 && ascii<=90){ //A-Z
                ans+=2;
            }
            else   //special characters
                ans+=5;
        }





        // unordered_set<int>temp;
        // for(int i =0;i<size(password);i++){
        //     int ascii = int(password[i]);
            
            
        //     if(find(temp.begin(),temp.end(),ascii) == temp.end()){
        //         if(ascii>=48 && ascii<=57){
        //         ans+=3;
        //         }
        //         else if(ascii>=65 && ascii <=122 ){
        
        //             if(ascii >=97 && ascii<=122)
        //                 ans+=1;
               
        //             else
        //                 ans+=2;
        //             }
        //         else
        //             ans+=5;
        //         }
        //         temp.insert(ascii);
        //     }
            
        return ans;
    }
};