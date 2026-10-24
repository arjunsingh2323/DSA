class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        for(int i = 0; i<n-1;i++){
            int maxi = *max_element(arr.begin()+i+1,arr.end());
            ans.push_back(maxi);
        }
        ans.push_back(-1);
        return ans;
        
    }
};