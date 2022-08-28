class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maax=INT_MIN;
        int ans=p[0];
        for(auto i:p) {
            maax=max(i-ans,maax);
            if(i<ans) {
                ans=i;
            }
        }
        return maax;
    }
};