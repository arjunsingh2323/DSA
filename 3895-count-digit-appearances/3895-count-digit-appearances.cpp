class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i< n;i++){
            while(nums[i] != 0){
                int d = nums[i] % 10;
                if( d == digit) cnt++;
                nums[i] /= 10;
            }
        }
        return cnt;
        
    }
};