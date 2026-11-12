class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int curr = nums[0], currdec = 1,currinc = 1, ans = 1;
        for(int i = 0; i<n-1;i++){
            if(nums[i] > nums[i+1]){
                currdec++;
                currinc = 1;
                
            }
            else if(nums[i] < nums[i+1]){
                currinc++;
                currdec = 1;
                
            }
            else{
                currinc = 1;
                currdec = 1;
            }
            ans = max(ans,max(currinc,currdec));
            

        }
        return ans;
        
    }
};