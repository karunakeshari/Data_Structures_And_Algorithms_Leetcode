class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(auto it:nums1){
            s.insert(it);
        }
        vector<int> ans;
        for(auto it:nums2){
            if(s.find(it)!=s.end()){
                ans.push_back(it);
                s.erase(it);
            }
        }
        return ans;
    }
};
//N=nums1.size() ans M=nums2.size()
//Time Complexity-O(NlogN)+O(M)
//Space Complexity-O(N)