class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        int sum  = 0;
        int dis = 0;
        for(int i = 0;i<boxes.size();i++){
            sum = 0;
            dis = 0;
            for(int j = 0;j<boxes.size();j++){
                if(boxes[j] == '1'){
                    dis = abs(j-i);
                    sum+=dis;
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};