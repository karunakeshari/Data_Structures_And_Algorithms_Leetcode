class Solution {
public:
    int threeSumClosest(vector<int>& nums,int target) {
       //Two Pointer Approach
        //Talking about absolute difference
        sort(nums.begin(),nums.end());
        int ans;
        int diff=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int low=i+1,high=nums.size()-1;
            while(low<high){
                int sum=nums[low]+nums[high]+nums[i];
                int tempDiff=abs(sum-target);
                if(tempDiff<diff){
                    diff=tempDiff;
                    ans=sum;
                }
                if(sum==target){
                    break;
                }
                else if(sum<target){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        return ans;
    }
};
//Time Complexity- O(N^2)
//Space Complexity- O(1)