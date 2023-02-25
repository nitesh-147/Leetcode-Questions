//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findNumberOfGoodComponent(int V, vector<vector<int>>& ad) {
        int ans=0;
        // list<int> ad[V+1];
        // for(auto i:adj){
        //     ad[i[0]].push_back(i[1]);
        //     ad[i[1]].push_back(i[0]);
        // }
        vector<bool> vis(V+1,false);
        for(int i=1;i<=V;i++){
            if(!vis[i]){
                queue<int> q;
                q.push(i);
                vis[i]=true;
                // int x=ad[i].size();
                bool chek=true;
                vector<int> v;
                while(!q.empty()){
                    int y=q.front();
                    v.push_back(y);
                    // if(ad[y].size()!=x){
                    //     chek=false;
                    //     // break;
                    // }
                    q.pop();
                    for(auto j:ad[y]){
                        if(!vis[j]){
                            vis[j]=true;
                            q.push(j);
                        }
                }
            }
            int x=v.size()-1;
            for(auto j:v){
                if(ad[j].size()!=x){
                    chek=false;
                    break;
                }
            }
            if(chek) ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends