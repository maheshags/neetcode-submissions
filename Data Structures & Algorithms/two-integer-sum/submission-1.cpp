class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        for ( int i=0; i<nums.size();i++)
        {
            for (int j=0; j<nums.size(); j++)
            {
                if (i!=j){
                    if ((nums[i]+nums[j] == target))
                    {
                        temp.push_back(i);
                        temp.push_back(j);
                        break;
                    }
                }
            }
            if (temp.size()!=0){
                break;
            }
        }return temp;
    }
};
