class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        vector<int> ans;
        int m=arr[(arr.size()-1)/2];
        while(i<=j && k>0){
            if(abs(arr[i]-m)==abs(arr[j]-m)){
                if(arr[i]>arr[j]){
                    ans.push_back(arr[i]);
                    i++;
                }
                else{
                    ans.push_back(arr[j]);
                    j--;
                }
            }
            else if(abs(arr[i]-m)>abs(arr[j]-m)){
                ans.push_back(arr[i]);
                i++;
            }
            else{
                ans.push_back(arr[j]);
                j--;
            }
            k--;
        }
        return ans;
    }
};
//Time Complexity-O(NlogN)
//Space Complexity-O(1)