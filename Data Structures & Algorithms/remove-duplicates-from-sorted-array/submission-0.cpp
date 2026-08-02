class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>hset;
        vector<int>nums2;
        for(int n:nums){
            if(!hset.count(n)){
                nums2.push_back(n);
            }
            hset.insert(n);
        }
        nums=nums2;
        return nums.size();
    }
};