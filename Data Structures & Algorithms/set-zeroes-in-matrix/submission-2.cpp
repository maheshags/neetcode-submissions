class Solution {
public:


    void makezero(vector<vector<int>>&matrix,int i,int j, int n ,int m){
        int temp=i;
        while(temp>=0){
            matrix[temp][j]=0;
            temp--;
        }
        temp=i;
        while(temp<n){
            matrix[temp][j]=0;
            temp++;
        }
        temp=j;
        while(temp>=0){
            matrix[i][temp]=0;
            temp--;
        }
        temp=j;
        while(temp<m){
            matrix[i][temp]=0;
            temp++;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector<pair<int,int>>positions;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    positions.push_back({i,j});
                }
            }
        }
        for(auto &p: positions){
            makezero(matrix,p.first,p.second,n,m);
        }
    }
};
