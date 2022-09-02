class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Two-Pointer Approach
        if(nums.size()==1){
            return 1;
        }
        int i=0,j=1;
        while(j<nums.size()){
            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }
            if(j<nums.size()){
                nums[++i]=nums[j++];
            }
        }
        return i+1;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)