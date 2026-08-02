class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sum;
        int l=0;
        int r=numbers.size()-1;

        while(l<r){
            int sum1=numbers[l]+numbers[r];
            if(sum1==target){
                sum.push_back(l+1);
                sum.push_back(r+1);
                return sum;
            }else if(sum1>target)r--;
            else l++;
        }

    }
};
