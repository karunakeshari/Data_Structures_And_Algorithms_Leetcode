class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.size()==2 && s.find(nums[i])==s.end()){
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return nums[0];
    }
};
//Time Complexity-O(NlogN)
//Space Complexity-O(1)