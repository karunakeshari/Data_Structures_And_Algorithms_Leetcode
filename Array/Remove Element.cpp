class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        while(i<nums.size()){
            while(i<nums.size() && nums[i]!=val){
                i++;
            }
            int j=i+1;
            while(j<nums.size() && nums[j]==val){
                j++;
            }
            if(j<nums.size()){
                swap(nums[i],nums[j]);
            }
            else{
                break;
            }
            i++;
        }
        return i;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)