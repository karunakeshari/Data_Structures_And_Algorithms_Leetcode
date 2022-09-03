class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            //check whether left part is sorted or not(It is confirm,one part will be sorted)
            else if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<nums[mid]){
                     high=mid-1;                    
                }
                else{
                    low=mid+1;
                }
            }
            //it shows right part is sorted
            else{
                if(target>nums[mid] && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
//Time Complexity- O(logN)
//Space Complexity- O(1)