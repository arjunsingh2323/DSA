class Solution {
public:
    int mySqrt(int x) {
       int ans = 1;
       int low = 0, high  = x;
       while(low<= high){
        long long mid = (low+high)/2;
        long long val = mid*mid;
        if(val<=x){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        
       }return high;
        
    }
};