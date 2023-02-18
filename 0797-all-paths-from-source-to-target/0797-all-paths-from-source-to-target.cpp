class Solution {
public:
   void dfs(int x,vector<vector<int>> graph,vector<int> temp,vector<vector<int>> &ans,int d){
       temp.push_back(x);
       if(x==d){
           ans.push_back(temp);
       }
       else{
           for(auto i:graph[x]){
               dfs(i,graph,temp,ans,d);
           }
       }
   }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<vector<int>> ans;
      vector<int> temp;
      int d=graph.size()-1;
      dfs(0,graph,temp,ans,d);
      return ans;
    }
};