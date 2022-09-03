class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
               if(mid<nums.size()-1 && target<nums[mid+1]){
                   return mid+1;
               } 
               low=mid+1;   
            }
            else{
                if(mid>=1 && target>nums[mid-1]){
                    return mid;
                }
                high=mid-1;
            }
        }
        return low;
    }
};
//Time Complexity-O(logN)
//Space Complexity-O(1)