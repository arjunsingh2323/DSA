class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> unionarr;
        int i = 0;
        int j = 0;

        while(i < n1 && j < n2){
            if(nums1[i] <= nums2[j]){
                if(unionarr.size() == 0 || unionarr.back() != nums1[i]){
                    unionarr.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(unionarr.size() == 0 || unionarr.back() != nums2[j]){
                    unionarr.push_back(nums2[j]);
                }
                j++;
            }
        } 

        while(i < n1){
            if(unionarr.size() == 0 || unionarr.back() != nums1[i]){
                unionarr.push_back(nums1[i]);
            }
            i++;
        }

        while(j < n2){
            if(unionarr.size() == 0 || unionarr.back() != nums2[j]){
                unionarr.push_back(nums2[j]);
            }
            j++;
        }

        return unionarr;
    }
};