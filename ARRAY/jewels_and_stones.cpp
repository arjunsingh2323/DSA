class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size(), x = stones.size(), cnt=0;
        for(int i = 0;i<n;i++){
            for(int j = 0; j<x; j++){
                if (jewels[i] == stones[j]){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};