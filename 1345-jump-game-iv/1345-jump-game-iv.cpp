class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        if(arr.size()==1) return 0;
        
        unordered_map<int,vector<int>> m;
        unordered_map<int,bool> m1;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            m[arr[i]].push_back(i);
        }
        
        vector<bool> vis(n,false);
        vis[0]=true;
        queue<pair<int,int>> q;
        q.push({0,0});
        
        while(!q.empty()){
            int x=q.front().first;
            int step=q.front().second;
            q.pop();
            
            if(x==n-1) return step;
            
            if(x-1>=0 && !vis[x-1]){
                vis[x-1]=true;
                q.push({x-1,step+1});
            } 
            
            if(x+1<n && !vis[x+1]){
                vis[x+1]=true;
                q.push({x+1,step+1});
            } 
        
            if(m1[arr[x]]==false){
                for(auto i:m[arr[x]]){
                if(!vis[i]){
                    vis[i]=true;
                    q.push({i,step+1});
                   }
                }
                m1[arr[x]]=true;
            }
            
        }
        
        return -1;
    }
};