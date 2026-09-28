class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxd = 0, cnt = 0;
        for(int i = 0 ; i<n ;i++){
            if(s[i] =='(' ){
                cnt++;
                maxd = max(maxd,cnt);
            }
            else if(s[i] == ')'){
                cnt--;
            }

        }
        return maxd;
        
    }
};