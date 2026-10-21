class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int mini = nums[0], maxi = nums[n-1];
        int j = 0;
        for(int i = mini; i<maxi;i++){
            if(i != nums[j]) ans.push_back(i);
            else j++;
        }
        return ans;
        
    }
};