class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> noOfOneInRow;
        vector<int> noOfOneInCol;
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]){
                    count++;
                }
            }
            noOfOneInRow.push_back(count);
        }
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(mat[j][i]){
                    count++;
                }
            }
            noOfOneInCol.push_back(count);
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(mat[i][j]==1 && noOfOneInRow[i]==1 && noOfOneInCol[j]==1){
                   ans++;
               }
            }
        }
        return ans;
    }
};
//Time Complexity- O(m*n)
//Space Compexity- O(m+n)