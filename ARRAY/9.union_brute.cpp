class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        int n1= nums1.size();
        int n2 = nums2.size();
        for(int i = 0 ;  i<n1;i++){
            st.insert(nums1[i]);
        }
        for(int i = 0; i<n2;i++){
            st.insert(nums2[i]);
        }
        vector<int>temp;
        for(auto it: st){
            temp.push_back(it);
        }
        return temp;
        
    }
};