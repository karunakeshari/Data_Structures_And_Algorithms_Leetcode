class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //single element in array
        if(nums.size()==1){
            return nums[0];
        }
        //boundary check
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        //boundary check
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
        int low=0,high=nums.size()-1;
        int mid;
        //Pair should be start from even index
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            else if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
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
//Time Complexity-O(logN)
//Space Complexity-O(1)