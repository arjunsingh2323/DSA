class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int cnt  = 0;
        sort(people.begin(),people.end());
        int l = 0;
        int r = n-1;
        while(l<=r){
            if(limit == people[l]+people[r]){
                cnt++;
                l++;
                r--;

            }
            else if(limit<people[l]+people[r]){
                cnt++;
                r--;
                
                
                
            }
            else if(limit>people[l]+people[r]){
                cnt++;
                l++;
                r--;
            }
            
        }
        return cnt;

        
        

        
    }
};