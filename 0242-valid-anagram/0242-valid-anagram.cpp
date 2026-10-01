class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n = s.size();
        if(s==t) return true;
        return false;

        
        
    }
};