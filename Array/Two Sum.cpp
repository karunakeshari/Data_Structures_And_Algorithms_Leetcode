class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numToIndMap;
        for(int i=0;i<nums.size()-1;i++){
            numToIndMap[nums[i]]=i;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(numToIndMap.find(val)!=numToIndMap.end() && numToIndMap[val]!=i){
                ans.push_back(i);
                ans.push_back(numToIndMap[val]);
                break;
            }
        }
        return ans;
    }
};
//Time Complexity- O(N)
//Space Complexity- O(N)