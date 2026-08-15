class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q1;
    queue<int>q2;
    
    void push(int x) {
        if(q1.empty()){
            q1.push(x);
            return;
        }
        if(!q1.empty() && q2.empty()){
            q2.push(x);
            while(!q1.empty()){
                int top=q1.front();
                q1.pop();
                q2.push(top);
            }
            swap(q1,q2);

        }
    }
    
    int pop() {
        int top=q1.front();
        q1.pop();
        return top;
        
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */