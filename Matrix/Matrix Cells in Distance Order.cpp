class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        //using multimap
        multimap<int,vector<int>> mmp;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int dis=abs(rCenter-i)+abs(cCenter-j);
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j);
                mmp.insert(pair<int,vector<int>>(dis,temp));
            }
        }
        vector<vector<int>> ans;
        auto it=mmp.begin();
        while(it!=mmp.end()){
            ans.push_back(it->second);
            it++;
        }
        return ans;
    }
};
//Time Complexity-O(rows*cols)
//Space Complexity-O(rows*cols)