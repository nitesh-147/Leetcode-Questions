class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        if(graph.size()==1) return 0;
        
        int finalState=(1<<graph.size())-1;
        
        vector<vector<int>> vis(graph.size(),vector<int>(finalState+1,0));
        
        queue<pair<int,int>> q;
        for(int i=0;i<graph.size();i++){
            q.push({i,1<<i});
        }
        
        int shortestPath=0;
        while(!q.empty()){
            int size=q.size();
            shortestPath++;
            for(int i=0;i<size;i++){
                int nodeId=q.front().first;
                int visitedNodeBitState=q.front().second;
                q.pop();
                for(int neighbour:graph[nodeId]){
                    int newVisitedNodeBitState=visitedNodeBitState | (1<<neighbour);
                    if(vis[neighbour][newVisitedNodeBitState]) continue;
                    vis[neighbour][newVisitedNodeBitState]=1;
                    if(newVisitedNodeBitState==finalState) return shortestPath;
                    
                    q.push({neighbour,newVisitedNodeBitState});
                }
            }
        }
        return -1;
    }
};