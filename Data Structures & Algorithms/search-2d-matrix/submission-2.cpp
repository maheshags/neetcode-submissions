class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

         int low=0;
        int high=(m*n)-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int midval=matrix[mid/n][mid%n];
            if (midval==target) return true;
            if(target>midval) low=mid+1;
            else high=mid-1;

        }
        return false;
    }
};
