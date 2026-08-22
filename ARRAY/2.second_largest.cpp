class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int largest = nums[0];
        int slargest = -1;
        for(int i = 0; i<nums.size();i++){
            if(largest < nums[i]){
                slargest = largest;
                largest = nums[i];
            }
            else if(largest > nums[i] && slargest < nums[i]){
                slargest = nums[i];
            }

        }
        return slargest;
      
    }
};