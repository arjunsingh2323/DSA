class Solution {
public:
    int findmaxi(vector<int> &v) {
        int n = v.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    long long calculateTotalHrs(vector<int> &piles, int hourly) {
        long long totalH = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalH += ceil((double)piles[i] / (double)hourly);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findmaxi(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long totalHrs = calculateTotalHrs(piles, mid);

            if (totalHrs <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
