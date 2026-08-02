class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> visit(n, vector<int>(m, 0));
        vector<int>result;
        int i=0,j=0;
        int total=n*m;
        int count=0;
        

        while(count<total){

            while(j<m && visit[i][j]==0){
                visit[i][j]=1;
                result.push_back(matrix[i][j]);
                j++;
                count++;

            }
            j--;
            i++;
            while(i<n && visit[i][j]==0){
                visit[i][j]=1;
                result.push_back(matrix[i][j]);
                i++;
                count++;
            }
            i--;
            j--;
            while(j>=0 && visit[i][j]==0){
                visit[i][j]=1;
                result.push_back(matrix[i][j]);
                j--;
                count++;
            }
            j++;
            i--;

            while( i>=0 && visit[i][j]==0){
                visit[i][j]=1;
                result.push_back(matrix[i][j]);
                i--;
                count++;
            }
            i++;
            j++;

        }
        return result;

    }
};