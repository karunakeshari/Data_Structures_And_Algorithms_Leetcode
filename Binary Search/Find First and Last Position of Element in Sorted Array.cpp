class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                int starting=mid;
                int ending=mid;
                while((starting-1)>=0 && nums[starting-1]==target){
                    starting-=1;
                }
                while((ending+1)<nums.size() && nums[ending+1]==target){
                    ending+=1;
                }
                ans[0]=starting;
                ans[1]=ending;
                break;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)