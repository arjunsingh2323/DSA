class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN,min = INT_MAX;
        for(int i = 0; i<n;i++){
            if(nums[i]>max) max = nums[i];
            if(nums[i]<min) min = nums[i];
        }
        for(int i = 0; i<n;i++){
            if(nums[i]>min&&nums[i]<max){
                return nums[i];
            }
        }
        return -1;
        
    }
};