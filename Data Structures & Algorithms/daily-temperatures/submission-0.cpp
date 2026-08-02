class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i=0,j=0;
        int n=temperatures.size();
        vector<int> result(n,0);
        while(i<n){
            j=i+1;
            while(j<n){
                
                if(temperatures[i]<temperatures[j]){
                    result[i]=j-i;
                    break;
                }
                else j++;
            }
            i++;
        }
        return result;
    }
};
