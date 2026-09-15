class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
       for(int temp = num; temp != 0;temp /= 10){
            int digit = temp%10;
            if(num%digit==0) cnt++;
            
        }
        return  cnt;
        
    }
};