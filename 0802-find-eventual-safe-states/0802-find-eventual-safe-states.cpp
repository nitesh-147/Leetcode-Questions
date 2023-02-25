class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> adj[n];
        vector<int> outDegree(n,0);
        queue<int> q;
        for(int i=0;i<graph.size();i++){
            outDegree[i]=graph[i].size();
            if(outDegree[i]==0) q.push(i);
            for(auto j:graph[i]){
                adj[j].push_back(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            ans.push_back(x);
            for(auto i:adj[x]){
                outDegree[i]--;
                if(outDegree[i]==0) q.push(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};