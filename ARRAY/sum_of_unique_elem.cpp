class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i<n;i++){
            if(mp[nums[i]]==1){
                sum+=nums[i];
            }
        }
        return sum;
        
    }
};