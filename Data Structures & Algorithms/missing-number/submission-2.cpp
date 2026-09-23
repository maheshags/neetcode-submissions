class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-1 != nums[i]){
                return nums[i+1]-1;
            }
        }
        if(nums[0]==0){
            return nums[nums.size()-1]+1;
        }
        else return nums[0]-1;
    }
};
