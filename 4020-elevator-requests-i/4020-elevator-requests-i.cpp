class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum = requests[0];
        for(int i = 1; i<requests.size();i++){
            int ans = (abs(requests[i-1]-requests[i]));
            sum = sum + ans;
            
        }return sum;

        
    }
};