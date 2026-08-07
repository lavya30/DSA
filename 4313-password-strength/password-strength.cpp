class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        unordered_set<int>temp;
        for(int i =0;i<size(password);i++){
            int ascii = int(password[i]);
            
            
            if(find(temp.begin(),temp.end(),ascii) == temp.end()){
                if(ascii>=48 && ascii<=57){
                ans+=3;
                }
                else if(ascii>=65 && ascii <=122 ){
        
                    if(ascii >=97 && ascii<=122)
                        ans+=1;
               
                    else
                        ans+=2;
                    }
                else
                    ans+=5;
                }
                temp.insert(ascii);
            }
            
        return ans;
    }
};