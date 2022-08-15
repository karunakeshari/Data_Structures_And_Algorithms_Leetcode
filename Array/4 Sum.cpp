class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        //two loops + two pointers
        for(int i=0;i<n-3;i++){
            //processing the duplicates of number 1
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                //processing the duplicates of number 2
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                long long left=j+1,right=n-1;
                long long newTarget=target-nums[i];
                newTarget-=nums[j];
                while(left<right){
                    if(nums[left]+nums[right]==newTarget){
                        vector<int> temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[left];
                        temp[3]=nums[right];
                        ans.push_back(temp);
                        //processing the duplicates of number 3
                        while(left<right && nums[left]==temp[2]){
                            ++left;
                        }
                        //processing the duplicates of number 4
                        while(left<right && nums[right]==temp[3]){
                            --right;
                        }
                    }
                    else if(nums[left]+nums[right]<newTarget){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};