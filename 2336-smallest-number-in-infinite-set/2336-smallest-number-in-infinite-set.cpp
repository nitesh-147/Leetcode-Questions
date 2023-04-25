class SmallestInfiniteSet {
public:
    set<int> s;
    int smallest=1;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        if(s.size()==0){
            return smallest++;
            // smallest++;
        }
        else{
            int small=*(s.begin());
            if(small<smallest){
                s.erase(small);
                return small;
            }
            else if(small>smallest){
                return smallest++;
            }
            else{
                s.erase(small);
                return smallest++;
            }
        }
    }
    
    void addBack(int num) {
        s.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */