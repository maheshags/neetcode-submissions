class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        int i=0;
        while(i<n){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"  ){
                if(!st.empty()){
                    int b=st.top();st.pop();
                    int a=st.top();st.pop();
                    if(tokens[i]=="+") st.push(a+b);
                    if(tokens[i]=="-") st.push(a-b);
                    if(tokens[i]=="*") st.push(a*b);
                    if(tokens[i]=="/") st.push(a/b);
                   
                }
            }else{
                st.push(stoi(tokens[i]));
                
            }
            i++;
        }return st.top();
    }
};
