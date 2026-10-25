class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long left = 0,cnt = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]>=minK && nums[i] <= maxK){
                cnt += (i - left + 1);
            }
            else{
                left = i+1;
            }

            
        }
        return cnt;
        
    }
};