class StockSpanner {
public:

    vector<int> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=0;
        int n=st.size()-1;
        if(st.empty()) {
            st.push_back(price);
            return 1;
        }
        
        if(price<st[n]){
            st.push_back(price);
            return 1;
        }
        else{
            st.push_back(price);
            count++;
            int temp=n;
            while(temp>=0){
                if(st[temp]<=price){
                    count++;
                    temp--;
                }else{
                    break;
                }
            }
        }
       
       return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */