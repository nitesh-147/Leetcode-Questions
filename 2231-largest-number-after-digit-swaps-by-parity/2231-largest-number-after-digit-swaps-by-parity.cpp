class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> p,q;
        vector<int> v;
        
        while(num!=0){
            int x=num%10;
            v.push_back(x);
            if(x%2==0)
                p.push(x);
            else
                q.push(x);
            
            num/=10;
            
        }
        reverse(v.begin(),v.end());
        int ans=0;
        
        for(auto i:v){
            // cout<<i;
            if(i%2==0){
                // cout<<p.top();
                ans=ans*10+p.top();
                // cout<<1<<ans<<" ";
                p.pop();
            }
            else{
                // cout<<q.top();
                ans=ans*10+q.top();
                // cout<<2<<ans<<" ";
                q.pop();
            }
        }
        return ans;
    }
};