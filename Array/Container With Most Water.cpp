class Solution {
public:
    int maxArea(vector<int>& height) {
        //Two Pointer Approach
        int left=0,right=height.size()-1;
        int ans=INT_MIN;
        while(left<=right){
            int containedWater=(right-left)*(min(height[left],height[right]));
            ans=max(ans,containedWater);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)