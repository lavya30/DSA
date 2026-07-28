class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res = 0;
        int low = 0;
        int high = 0;
        int maxim = 0;
        unordered_map<int,int>hash;
        while(high<fruits.size()){
            hash[fruits[high]]++;

            while(hash.size()>2){
                hash[fruits[low]]--;
                if(hash[fruits[low]]==0){
                    hash.erase(fruits[low]);
                }
                low++;
            }
            if(hash.size()<=2){
                int len = high-low+1;
                maxim = max(maxim,len);

            }
            high++;

        }
        return maxim;
        
    }
};