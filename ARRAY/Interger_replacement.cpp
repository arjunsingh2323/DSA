class Solution {
public:
    int integerReplacement(int n) {
        long m = n;
        int cnt = 0;
        while(m!=1){
            if(m%2==0){
                m/=2;
                cnt++;
            }
            else if(m == 3 || m%4 ==1){
                m -=1;
                cnt++;
            }
            else{
                m +=1;
                cnt++;
            }
            
            
        }
        return cnt;
        
    }
};