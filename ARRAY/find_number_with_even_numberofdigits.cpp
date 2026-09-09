class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt1 = 0,n = nums.size();
        for(int i = 0; i<n ;i++){

            int num = nums[i];
            int cnt = 0;

            while( num > 0 ){
                num /= 10;
                cnt++;
            }
            if(cnt % 2 == 0){
                cnt1++;
            }
            
        }
        return cnt1;
        
    }
};