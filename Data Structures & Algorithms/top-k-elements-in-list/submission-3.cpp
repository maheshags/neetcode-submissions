class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashmap;
        for(auto n : nums){
            hashmap[n]++;
        }

        vector<pair<int,int>>vec(hashmap.begin(),hashmap.end());

        sort(vec.begin(),vec.end() , [](auto &a,auto &b){
            return a.second>b.second;
        });


        vector<int> result;
        int i=0;
        for(auto&p : vec){
            if (i==k) break;
            result.push_back(p.first);
            i++;

        }
        return result;


    }
};
