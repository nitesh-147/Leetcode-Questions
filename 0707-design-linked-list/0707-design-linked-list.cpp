class MyLinkedList {
public:
   vector<int> v;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index>=v.size()) return -1;
        return v[index];
    }
    
    void addAtHead(int val) {
        vector<int> u;
        u.push_back(val);
        u.insert(u.end(),v.begin(),v.end());
        v=u;
    }
    
    void addAtTail(int val) {
        v.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        if(index==v.size())v.push_back(val);
        else if(index<v.size()){
            v.insert(v.begin()+index,val);
        }
    }
    
    void deleteAtIndex(int index) {
       if(index<v.size()){
           v.erase(v.begin()+index);
       }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */