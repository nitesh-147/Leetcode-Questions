class MinStack {
public:
   stack<int> s;
    stack<int> minn;
    int min;

    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(minn.empty()){
            min=val;
            minn.push(val);
        }
        else if(val<min){
            minn.push(val);
            min=val;
        }
        else
            minn.push(minn.top());
    }
    
    void pop() {
        s.pop();
        minn.pop();
        if(!minn.empty())
            min=minn.top();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */