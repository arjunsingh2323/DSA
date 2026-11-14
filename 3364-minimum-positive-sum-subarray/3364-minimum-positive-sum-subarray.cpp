class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i = 0;i<n;i++){
            int currS = 0;
            for(int j = i ;j<n;j++){
                int len = j-i+1;
                currS +=nums[j];

                if(len>=l && len <=r && currS>0){
                    mini = min(mini,currS);

                }
            }
        }
        return mini == INT_MAX ? -1 : mini;
        
    }
};