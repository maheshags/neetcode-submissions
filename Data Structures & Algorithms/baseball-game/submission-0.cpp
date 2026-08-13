class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int result=0;

        for(string s:operations){
            if(s=="+"||s=="D"||s=="C"){
                if(s=="+"){
                      int b=st.top();
                      st.pop();
                      int a=st.top();
                      st.push(b);
                      st.push(a+b);
                      result+=a+b;
                }
                if(s=="D"){
                    int b=st.top();
                      st.push(2*b);
                      result+=2*b;
                }
                if(s=="C"){
                    result-=st.top();
                    st.pop();
                    
                }
            }else{
                st.push(stoi(s));
                result+=stoi(s);
            }
        }
        return result;

    }
};