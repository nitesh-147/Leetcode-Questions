class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++) q.push(i);
        int t=k;
        while(q.size()!=1){
            t--;
            if(t==0){
                q.pop();
                t=k;
            }
            else{
            int a=q.front();
            q.pop();
            q.push(a);
            }
            
        }
        return q.front();
    }
};