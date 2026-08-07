class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count = 1;
        int dominant = nums[0];
        for(int i = 1;i<nums.size();i++){

           
            if(dominant == nums[i])
                count++;
            else
                count--;
            if(count == 0){
                dominant = nums[i];
                count = 1;
            }
        }
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(dominant == nums[i])
                ans++;
        }
        int answer = 0;
        if(ans > nums.size()/2)
            answer =  dominant;
        return answer;
    }
};