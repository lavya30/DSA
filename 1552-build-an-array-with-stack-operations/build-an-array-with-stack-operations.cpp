class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string>ans;

        int high = 0;
        for(int i= 1;i<=n && high < target.size();i++){
            if(i == target[high]){
                ans.push_back("Push");
                high++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            

        }
        // vector<int>temp;
        // for(int i =1; i<=n;i++){
        //     if(find(target.begin(),target.end(),i) !=  target.end()){
        //         temp.push_back(i);
        //         ans.push_back("Push");
        //         if(temp == target)
        //             break;
        //     }
        //     else{
        //         ans.push_back("Push");
        //         ans.push_back("Pop");
        //     }


        // }
        return ans;
      
    }
};