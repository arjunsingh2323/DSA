class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;
        

        for(int i = 1;i<=n;i++){

            int temp = i;
            int digits = 0;
            while (temp != 0) {
                temp /= 10;
                digits++;

            
            }
            total += (digits-1)/3;

        }
        return total;
        
        
    }
};