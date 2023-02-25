class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        queue<int> q;
        q.push(start);
        vector<int> vis(n,0);
        vis[start]=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(arr[x]==0)return true;

            if(x+arr[x]<n && x+arr[x]>=0 && !vis[x+arr[x]]){
                vis[x+arr[x]]=1;
                q.push(x+arr[x]);
            }
             if(x-arr[x]<n && x-arr[x]>=0 && !vis[x-arr[x]]){
                vis[x-arr[x]]=1;
                q.push(x-arr[x]);
            }
        }
        return false;
    }
};