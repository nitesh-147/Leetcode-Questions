class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> p;
        p.push(a);p.push(b);p.push(c);
        int ans=0;
        while(true){
            int a=p.top();
            p.pop();
            int b=p.top();
            if(a==0||b==0)
                break;
            p.pop();
            p.push(a-1);
            p.push(b-1);
            ans++;
        }
        return ans;
    }
};