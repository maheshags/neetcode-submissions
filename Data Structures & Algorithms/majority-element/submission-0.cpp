class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hmap;
        for(int n:nums){
            hmap[n]++;
        }
        vector<pair<int,int>>vec(hmap.begin(),hmap.end());

        sort(vec.begin(),vec.end(), [](pair<int,int> a, pair<int,int> b){
            return a.second>b.second;
        });

        return vec[0].first;
    }
};