class Solution {
public:
    int maxProduct(int n) {
        string num =  to_string(n);
        vector<int>store;

        for(int i = 0;i<size(num);i++){
            int number =  num[i] - '0';
            store.push_back(number);
        }
        sort(store.begin(),store.end(),greater<>());
        return store[0]*store[1];
    }
};