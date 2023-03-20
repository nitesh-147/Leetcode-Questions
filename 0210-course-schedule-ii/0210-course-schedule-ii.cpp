class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& prerequisites) {
       unordered_map<int,list<int>> m;
       for(auto i:prerequisites){
           m[i[0]].push_back(i[1]);
       }

       vector<int> indegree(v,0);
       for(auto i:m){
        for(auto j:i.second){
            indegree[j]++;
        }
       }

       queue<int> q;
       for(int i=0;i<v;i++){
        if(indegree[i]==0) q.push(i);
       }

       int cnt=0;
       vector<int> ans;
       while(!q.empty()){
        int x=q.front();
        q.pop();
        cnt++;
        ans.push_back(x);
        for(auto i:m[x]){
            indegree[i]--;
            if(indegree[i]==0)q.push(i);
        }

       }
       reverse(ans.begin(),ans.end());
       if(cnt==v) return ans;
       else return {};

    
    }
};