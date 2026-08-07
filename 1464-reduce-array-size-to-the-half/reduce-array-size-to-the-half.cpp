class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int half =  arr.size()/2;
        unordered_map<int,int>freq;

        for(int i = 0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        vector<pair<int, int>> freq_vec(freq.begin(), freq.end());

       
        sort(freq_vec.begin(), freq_vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });
        int counter = 0;
        int sum = 0;
        for(int i = 0;i<freq_vec.size();i++){
            sum+=freq_vec[i].second;
            counter++;
            if(sum>=half){
                break;
            }   

            
        
        }

        return counter;
    }
};