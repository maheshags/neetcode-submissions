class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       int count=0;
        int n=grid.size();
        int m=grid[0].size();

        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2  ){
                    q.push({i,j});
                }
                 if( grid[i][j]==1 ){
                   
                    count++;
                }
            }
        } 
        int min=0;
        while(!q.empty() && count>0){
            int size=q.size();
            for(int i=0;i<size;i++){
                
                auto top=q.front();
                int l=top.first;
                int j=top.second;
                int row[]={-1,0,1,0};
                int col[]={0,1,0,-1};
                q.pop();

                for(int k=0;k<4;k++){
                    int nrow=l+row[k];
                    int ncol=j+col[k];
                    
                    if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&grid[nrow][ncol]==1){
                        q.push({nrow,ncol});
                        grid[nrow][ncol]=2;
                        count--;
                    }
                }
            }
            min++;
        }
        if(count==0) return min;
        else return -1;
    }
};
