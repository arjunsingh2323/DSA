class Solution {
public:
    int lower_bound(vector<int>& nums,int target, int n){
        int low = 0, high = n-1, ans = n;
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }

    int upper_bound(vector<int>& nums,int target, int n){
        int low = 0, high = n-1, ans = n;
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid]>target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }

    

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = lower_bound(nums,target,n);
        if(first == n || nums[first]!=target) return {-1,-1};
        int last = upper_bound(nums,target,n)-1;
        return {first,last};

        
    }
};