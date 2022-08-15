class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> frequency;
        for(int i=0;i<nums.size();i++){
            if(frequency.find(nums[i])!=frequency.end()){
                return true;
            }
            frequency[nums[i]]++;
        }
        return false;
    }
};
//Time Complexity- O(N)
//Space Complexity- O(N)