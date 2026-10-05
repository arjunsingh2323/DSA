class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        if (colors[0] != colors[n-1]) return n - 1;

        int ans = 0;
        for (int i = 1; i < n - 1; i++) {
            if (colors[i] != colors[0]) {
                ans = max(ans, max(i, n - 1 - i));
            }
        }
        return ans;
    }
};