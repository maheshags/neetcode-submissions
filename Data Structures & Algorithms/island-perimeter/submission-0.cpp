class Solution {
public:

    void dfs(int i,int j, int n,int m,int&count, vector<vector<int>>&grid,vector<vector<int>>&vis){
        vis[i][j]=1;
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
       

        for(int k=0;k<4;k++){
            int nrow=i+row[k];
            int ncol=j+col[k];

            if(nrow<0 || nrow>=n || ncol<0 || ncol>=m || grid[nrow][ncol]==0) count++;
            else if(vis[nrow][ncol]==0&&grid[nrow][ncol]==1){
                dfs(nrow,ncol,n,m,count,grid,vis);
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]==0){
                    dfs(i,j,n,m,count,grid,vis);
                }
            }
        }
        return count;

        
    }
};