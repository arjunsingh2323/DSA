class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int maxi = INT_MIN;
        while(l<r){
            int wat = 0;
            if(height[l] < height[r]){
                wat = height[l]*(r-l);
                maxi = max(maxi,wat);
                l++;
            }
            else{
                wat = height[r] *(r-l);
                maxi = max(maxi,wat);
                r--;
            }
        }
        return maxi;
        
    }
};