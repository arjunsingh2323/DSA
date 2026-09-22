class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n);
        int gr = INT_MIN;
        for(int i = 0;i<n;i++){
            if(candies[i]>gr) gr = candies[i];
        }
        for(int i = 0; i<n;i++){
            result[i] = (candies[i] + extraCandies) >= gr;
            
        }

        return result;
    }
};