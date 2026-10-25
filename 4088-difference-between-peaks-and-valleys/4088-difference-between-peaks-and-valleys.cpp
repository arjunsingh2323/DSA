class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n = nums.size();
        int sp = 0;
        int sv = 0;
        for(int i = 0; i<n-1 ;i++){
            if(i == 0) continue;
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                sp += nums[i];
            }
            if(nums[i]<nums[i-1] && nums[i] < nums[i+1]){
                sv += nums[i];
            }
            
        }
        return sp-sv;
        
    }
};