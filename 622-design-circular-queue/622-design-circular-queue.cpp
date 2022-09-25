class MyCircularQueue {
public:
    int size,head=0,tail=-1,currsize=0;
    vector<int> q;
    MyCircularQueue(int k) {
        size=k;
         q.resize(k);
    }
    
    bool enQueue(int value) {
        if(currsize==size)
            return false;
        
        tail++;
        q[tail%size]=value;
        currsize++;
        return true;
        
    }
    
    bool deQueue() {
        if(currsize==0)
            return false;
        head++;
        currsize--;
        return true;
    }
    
    int Front() {
        if(currsize==0)
            return -1;
        return q[head%size];
    }
    
    int Rear() {
        if(currsize==0)
            return -1;
        return q[tail%size];
    }
    
    bool isEmpty() {
        return (currsize==0);
    }
    
    bool isFull() {
        return (currsize==size);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */