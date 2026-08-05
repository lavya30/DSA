class Solution {
public:
    string sortVowels(string s) {
        string ans = "";
        vector<pair<char,int>>hash;
        for(int i= 0;i<size(s);i++){
            if(s[i]=='a'|| s[i]=='A'|| s[i]=='e'|| s[i]=='E'|| s[i]=='i'|| s[i]=='I'|| s[i]=='o'|| s[i]=='O'|| s[i]=='u'|| s[i]=='U'){
                
               
                hash.push_back({s[i],(int)s[i]});
            }
           
         
        }
        sort(hash.begin(), hash.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
        });

        for(int i= 0;i<size(s);i++){
            if(s[i]=='a'|| s[i]=='A'|| s[i]=='e'|| s[i]=='E'|| s[i]=='i'|| s[i]=='I'|| s[i]=='o'|| s[i]=='O'|| s[i]=='u'|| s[i]=='U'){

                s[i] = hash.back().first;
                hash.pop_back();


            }
        }

  
        return s;
    }
};