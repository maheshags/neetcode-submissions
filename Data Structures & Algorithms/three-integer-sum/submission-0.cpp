class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> sum;
        int l=0;
        int r=nums.size()-1;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                int sum1=nums[i]+nums[l]+nums[r];
                if(sum1==0){   
                sum.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[l+1])l++;
                while(l<r && nums[r]==nums[r-1])r--;
                l++;r--;
                }else if(sum1>0)r--;
                else l++;
            }
        }
        return sum;
    }
};
