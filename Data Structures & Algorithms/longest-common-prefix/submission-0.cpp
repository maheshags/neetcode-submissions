class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prev;

        for(string s:strs){

            if(prev.size()==0) prev=s;
            int size=min(s.size(),prev.size());
            int i=0;
            for(;i<size;i++){
                if(prev[i]!=s[i]){
                    break;
                }
            }
            
            prev=prev.substr(0,i);
            if(prev.size()==0)return "";
        }
        return prev;
}
 
};