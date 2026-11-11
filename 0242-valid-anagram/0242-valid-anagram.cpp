class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if(m!=n) return false;
        unordered_map<int,int>mpp;
        for(auto it : s){
            mpp[it]++;
        }
        for(auto it : t){
            mpp[it]--;
        }

        for(auto it : mpp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
        
    }
};