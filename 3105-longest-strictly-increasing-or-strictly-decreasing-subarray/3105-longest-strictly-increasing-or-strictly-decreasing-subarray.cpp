class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int curr = nums[0], currdec = 1,currinc = 1, ans = 1, maxi1 = 1, maxi2 = 1;
        for(int i = 0; i<n-1;i++){
            if(nums[i] > nums[i+1]){
                currdec++;
                currinc = 1;
                maxi1 = max(maxi1,currdec);
            }
            else if(nums[i] < nums[i+1]){
                currinc++;
                currdec = 1;
                maxi2 = max(maxi2,currinc);
            }
            else{
                currinc = 1;
                currdec = 1;
            }
            ans = max(maxi1,maxi2);
            

        }
        return ans;
        
    }
};