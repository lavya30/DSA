// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // int first = 0;
        // for(int i=1;i<=n;i++){
        //     if(isBadVersion(i)){
        //         first = i;
        //         break;
        //     }
        // }
        // return first;

        int left = 1;
        int right = n;
        
        int mid = left + (right - left) / 2; // to avoid integer overflow
        while(left<right){
            mid = left + (right - left) / 2;
            if(isBadVersion(mid)){
                right = mid;
                
            }
            else{
                left = mid+1;
              
            }

        }
        return left;

      
    }
};