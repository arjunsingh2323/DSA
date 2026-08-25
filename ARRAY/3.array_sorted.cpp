class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;
        for(int i = 0;i<n;i++){
            if(nums[(i+1)%n]>=nums[i]){

            }
            else breaks++;
        }
        return breaks<=1;
        
    }
};