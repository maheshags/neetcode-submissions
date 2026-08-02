class Solution {
public:

    void reverse(vector<int>&nums,int start,int end){
        int j=end;
        for(int i=start;i<j;i++){
            swap(nums[i],nums[j]);
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};