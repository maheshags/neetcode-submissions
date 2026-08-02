class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>result;
        int n=matrix.size();
        int m=matrix[0].size();

        for(int j=0;j<m;j++){
            vector<int>s;
            for(int i=n-1;i>=0;i--){
                s.push_back(matrix[i][j]);
            }
            result.push_back(s);
        }
        matrix=result;
    }
};
