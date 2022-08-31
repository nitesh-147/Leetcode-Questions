class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        for(int i=0;i<p.size();i++){
            int d=0;
            for(int j=i+1;j<p.size();j++)
            {
                if(p[j]<=p[i])
                {
                    d=p[j];
                    break;
                }
            }
            p[i]-=d;
        }
        return p;
    }
};