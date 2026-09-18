class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int r=it.first;
            int c=it.second;

            int delr[]={-1,0,1,0};
            int delc[]={0,1,0,-1};
            for(int k=0;k<4;k++){

                int newr=delr[k]+r;
                int newc=delc[k]+c;

                if(newr>=0 && newr<m && newc>=0 &&newc<n && grid[newr][newc]!=-1){
                    if(grid[r][c]+1 < grid[newr][newc]){
                        grid[newr][newc]=grid[r][c]+1;
                        q.push({newr,newc});
                    }
                }
            }

            
        }
        
    }
};
