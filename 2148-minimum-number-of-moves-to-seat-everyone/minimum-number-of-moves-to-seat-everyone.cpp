class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(students.begin(),students.end());
        sort(seats.begin(),seats.end());

        int low = 0;
        int low2 = 0;
        int sum = 0;
        while(low<seats.size() && low2<students.size()){
            sum+=abs(students[low2] - seats[low]);
            low++;
            low2++;
        }
        return sum;
    }
};