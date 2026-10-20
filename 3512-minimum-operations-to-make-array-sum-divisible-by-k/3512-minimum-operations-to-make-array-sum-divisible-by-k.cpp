class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n;i++){
            sum += nums[i];
        }
        while(sum!=0){
            if(sum%k==0) return cnt;
            else{
                sum -= 1;
                cnt++;
            }
        }
        return cnt;
        
    }
};