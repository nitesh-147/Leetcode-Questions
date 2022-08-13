class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0,m=p[0];
        for(int i=1;i<p.size();i++){
            ans=max(p[i]-m,ans);
            if(m>p[i])
                m=p[i];
        }
        return ans;
    }
};