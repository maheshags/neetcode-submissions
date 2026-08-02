class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>hmap;
        for(int n:nums){
            hmap[n]++;
        }
        vector<pair<int,int>> v(hmap.begin(),hmap.end());
        sort(v.begin(),v.end(),[](pair<int,int> a , pair<int,int> b){
            return a.second>b.second;
        });
        vector<int> result;
        int n=nums.size()/3;
        for(auto p:v){
            if(p.second>n)result.push_back(p.first);
            else break;
        }
        return result;
    }
};