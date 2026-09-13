class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>arr;
        int left = 0, right = n;
        for(int i = 0; i<2*n-1;i++){
            arr.push_back(nums[left]);
            left++;
            arr.push_back(nums[right]);
            right++;
            if(left>n || right>2*n-1) break;
        }
        return arr;
    }
};