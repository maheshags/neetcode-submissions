class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> numss;

        for(int val:nums){
            if(numss.count(val)) return val;
            numss.insert(val);
        }
        return -1;
    }
};
