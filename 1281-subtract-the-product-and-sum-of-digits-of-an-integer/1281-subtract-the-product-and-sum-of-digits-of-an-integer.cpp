class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int p = 1;
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            sum += digit;
            p *=digit;
            n /= 10;
        }
        return {p-sum};
    }
};