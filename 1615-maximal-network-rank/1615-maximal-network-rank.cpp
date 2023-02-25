class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> adj[n];
        for(auto i:roads){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int curr=adj[i].size()+adj[j].size();
                bool check=false;
                for(auto k:adj[j]){
                    if(k==i){
                        check=true;
                        break;
                    }
                }
                if(check) curr--;
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};