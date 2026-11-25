class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN,curr_sum = 0;
        for(int i = 0; i<n;i++){
            curr_sum += nums[i];
            if(curr_sum>maxi) maxi =curr_sum;
            if(curr_sum<0) curr_sum = 0;
        }
        return maxi;
        
    }
};