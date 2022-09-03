class Solution {
public:
    int fillCups(vector<int>& a) {
        priority_queue<int> q;
        for(auto i:a){
            if (i!=0)
                q.push(i);
        }
        // q.push(a[0]);q.push(a[1]);q.push(a[2]);
        int ans=0;
        
        while(q.size()>1){
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            ans++;
            a--;
            b--;
            if(a>0)
                q.push(a);
            if(b>0)
                q.push(b);
        }
        if(q.size())
            ans+=q.top();
        
        return ans;
    }
};