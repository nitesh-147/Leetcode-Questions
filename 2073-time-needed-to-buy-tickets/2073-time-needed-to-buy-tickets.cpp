class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        queue<int> s;
        for(int i=0;i<t.size();i++)
            s.push(t[i]);
        int ans=0;
        while(!s.empty()){
            ans++;
            if(s.front()-1)
            s.push(s.front()-1);
                // cout<<ans<<" "<<k<<" "<<s.front()<<" ";
           if(k==0){
              if(s.front()-1==0) 
                  return ans;
               else
                   k=s.size()-1;
           }
                
                s.pop();
            k--;
        }
        return 0;
    }
};