class Solution {
public:
    bool checkGoodInteger(int n) {
        int dS = 0;
        int sS = 0;
        while(n!=0){
            int digit = n%10;
            dS += digit;
            sS += (digit*digit);
            n/=10;
        }
        if((sS - dS)>= 50) return true;
        return false;
        
    }
};