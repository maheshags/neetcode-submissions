class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0;
        int high=0;
        for(int n:weights){
            low=max(low,n);
            high+=n;
        }

        while(low<high){
            int mid=low+(high-low)/2;
            int days1=1;
            int currw=0;
            for(int x:weights){
                if(currw+x <= mid){
                    currw+=x;
                }
                else{
                    days1++;
                    currw=x;
                }
            }
            if(days1<=days) high=mid;
            else low=mid+1l;
        }
        return low;
    }
};