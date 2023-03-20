class MyQueue {
public:
     stack<int> st; 
    MyQueue() {
      
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> temp;
        while(st.size()!=1){
            temp.push(st.top());
            st.pop();
        }
        int a=st.top();
        st.pop();
        while(temp.size()!=0){
            st.push(temp.top());
            temp.pop();
        }
        return a;
    }
    
    int peek() {
         stack<int> temp;
        while(st.size()!=1){
            temp.push(st.top());
            st.pop();
        }
        int a=st.top();
        temp.push(a);
        st.pop();
         while(temp.size()!=0){
            st.push(temp.top());
             temp.pop();
        }
        
        return a;
       
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */