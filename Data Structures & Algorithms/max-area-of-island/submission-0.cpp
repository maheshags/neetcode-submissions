class Solution {
public:

    int dfs(int i,int j, int n,int m,int&area, vector<vector<int>>&grid1,vector<vector<int>>&vis){
        vis[i][j]=1;
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
       

        for(int k=0;k<4;k++){
            int nrow=i+row[k];
            int ncol=j+col[k];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid1[nrow][ncol]==1&&vis[nrow][ncol]==0){ 
                dfs(nrow,ncol,n,m,area,grid1,vis);
                area++;
            }
        }
        return area;
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        int area=1;

        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]==0){
                    int maxarea=dfs(i,j,n,m,area,grid,vis);
                    count=max(count,maxarea);
                    area=1;
                }
            }
        }
        return count;
    }
};
