class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        int i=0;
        while (i<n){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty())return false;
                if(s[i]==')' && st.top()=='(') st.pop();
                else if(s[i]=='}' && st.top()=='{') st.pop();
                else if(s[i]==']' && st.top()=='[') st.pop();
                else return false;

            }
            i++;
        }
        if(st.empty())return true;
        else return false;
    }
};
