class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {

        int counter  = 0;
        int cap = capacity;

        for(int i = 0;i<plants.size();i++){
            if(plants[i]<= cap){
                cap-=plants[i];
                counter++;
            }
            else if(plants[i]> cap){
                cap =  capacity;
                counter+=(2*i)+1;
                cap-=plants[i];
                
            }
        }

        return counter;
    }
};