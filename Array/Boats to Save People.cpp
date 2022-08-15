class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int noOfBoats=0;
        int i=0,j=people.size()-1;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
            }
            else if(people[i]>people[j]){
                i++;
            }
            else{
                j--;
            }
            noOfBoats++;
        }    
        return noOfBoats;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)