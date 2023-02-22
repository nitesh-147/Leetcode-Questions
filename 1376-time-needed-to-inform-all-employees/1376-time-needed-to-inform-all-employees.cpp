class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
       vector<int> adj[n];
       for(int i=0;i<n;i++){
           if(manager[i]!=-1)
            adj[manager[i]].push_back(i);
       }
       int ans=0;
       queue<pair<int,int>> q;
       q.push({headID,0});
       while(!q.empty()){
           int i=q.front().first;
           int t=q.front().second;
           ans=max(ans,t);
           q.pop();
           for(auto j:adj[i]){
               q.push({j,informTime[i]+t});
           }
       }
        return ans;
    }
};