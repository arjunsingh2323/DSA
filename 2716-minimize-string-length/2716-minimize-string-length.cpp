class Solution {
public:
    int minimizedStringLength(string s) {
        
        unordered_map<char,int>ans;
        for(int num : s){
            ans[num]++;
        }
        return ans.size();

        
    }
};