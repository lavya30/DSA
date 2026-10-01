class Solution {
public:
    bool isValid(string s) {
        
        stack<char>store;
        
        for(auto it:s){
            if(it == '(' || it == '{' || it == '['){
                store.push(it);
            }
            else{
                if(store.empty()){

                    store.push(it);
                    continue;
                }
                char t = store.top();
                if(it == ')' &&  t == '(' || it == ']' &&  t == '['  || it == '}' &&  t == '{')
                    store.pop();  
                else 
                    store.push(it);
            }

        }
        return store.empty();
    }
};