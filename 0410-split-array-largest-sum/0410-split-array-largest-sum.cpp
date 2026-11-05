class Solution {
public:


    int cntSub(vector<int>&arr , int sum){
        int cntSubarr = 1;
        long long sumsub = 0;
        for(int i = 0; i<arr.size();i++){
            if(sumsub+arr[i] <= sum){
                sumsub += arr[i];
            }
            else{
                cntSubarr += 1;
                sumsub = arr[i];
            }
        }
        return cntSubarr;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid = low+(high-low)/2;
            int numSubarray = cntSub(nums,mid);
            if(numSubarray>k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
        
    }
};