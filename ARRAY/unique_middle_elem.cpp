class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int low = 0,high = n-1;
        int mid = low+(high-low)/2;
        for(int i = 0; i<n ; i++){
            if(i==mid) continue;
            if(nums[i] == nums[mid]) return false;
        }
        return true;
    }
};