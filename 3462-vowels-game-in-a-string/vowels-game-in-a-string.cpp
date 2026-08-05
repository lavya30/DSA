class Solution {
public:
    bool doesAliceWin(string s) {
        for(int i= 0;i<size(s);i++){
            if(s[i]=='a' || s[i]=='i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
                return true;

        }
        return false;
        // int vowels = 0;
        // for(int i= 0;i<size(s);i++){
        //     if(s[i]=='a' || s[i]=='i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
        //         break;
        //     if(i==size(s)-1)
        //         return false;
        // }
        // for(int i = 0; i<size(s);i++){
        //       if(s[i]=='a' || s[i]=='i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
        //         vowels++;

        // }
        // bool alice = true;
        // bool bob =  false;
        // while(vowels!=0){
          
        //     if(vowels %2!= 0 && alice == true)
        //         return true;
        //     else if(vowels%2 == 0 && bob ==true)    
        //         return false;

        //     else if(vowels%2==0 && alice == true ){
        //         vowels = vowels - (vowels-1);
        //         alice = false;
        //         bob = true;
        //     }
        //     else if(vowels%2!=0 && bob == true){
        //         alice = true;

        //         bob = false;
        //     }

        // }
        // return alice;
    }

};