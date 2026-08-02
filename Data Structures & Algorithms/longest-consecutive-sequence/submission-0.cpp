class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int length=0;
        for(int num:s){

            if(!s.count(num-1)){
                int currnum=num;
                int len=1;
                while(s.count(currnum+1)){
                    currnum++;
                    len++;
                }
                 length=max(length,len);
            }
           
        }
        return length;
    }
};
