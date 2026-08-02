class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       vector<vector<int>>tmatrix;
       int n=matrix.size();
       int m=matrix[0].size();
       for(int j=0;j<m;j++){
        vector<int>row;
        for(int i=0;i<n;i++){
            row.push_back(matrix[i][j]);
        }
        tmatrix.push_back(row);
       } 
       return tmatrix;
    }
};