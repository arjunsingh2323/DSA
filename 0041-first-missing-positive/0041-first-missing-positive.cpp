class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_set<int>st;
        for(auto it:nums){
            if(it > 0){
                st.insert(it);
            }
        }
        for(int i = 1; i<=n+1 ;i++){
            if(st.find(i) == st.end()){
                return i;
            }
        }
        return 1;
        
    }
};