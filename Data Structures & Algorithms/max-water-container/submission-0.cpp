class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;

        long long ans=0;
        while(left<right){
            int width=right-left;
            int height=min(heights[left],heights[right]);
            long long maxarea=height*width;
            ans=max(ans,maxarea);

            if (heights[left]<heights[right]) left++;
            else right--;

        }
        return ans;
    }
};
