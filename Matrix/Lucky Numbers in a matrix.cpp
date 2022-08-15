class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_map<int,int> m;
        for(int i=0;i<matrix.size();i++){
            int rowMin=matrix[i][0];
            for(int j=1;j<matrix[0].size();j++){
                if(rowMin>matrix[i][j]){
                    rowMin=matrix[i][j];
                }
            }
            m[rowMin]=rowMin;
        }
        vector<int> ans;
        for(int i=0;i<matrix[0].size();i++){
            int colMax=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                if(colMax<matrix[j][i]){
                    colMax=matrix[j][i];
                }
            }
            if(m.find(colMax)!=m.end()){
                ans.push_back(colMax);
            }
        }
        return ans;
    }
};
//Time Complexity -O(N^2)
//Space Complexity -O(N)