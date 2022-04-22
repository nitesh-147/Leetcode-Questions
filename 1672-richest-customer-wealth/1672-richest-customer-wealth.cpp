class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++)
        {
            int a=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                a+=accounts[i][j];
            }
            ans=max(a,ans);
        }
        return ans;
    }
};