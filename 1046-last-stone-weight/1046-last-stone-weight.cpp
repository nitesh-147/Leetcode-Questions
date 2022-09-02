class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(auto i:stones){
            p.push(i);
        }
        
        while(p.size()>1){
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            if(b!=a)
                p.push(a-b);
        }
        if(p.size()==1)
            return p.top();
        else
            return 0;
    }
};