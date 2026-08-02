class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(string c:strs){
            s+=to_string(c.size())+"#"+c;
        }
        return s;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> result;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            result.push_back(s.substr(j,len));
            i=j+len;

        }
        return result;
    }
};
