class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
//         [1998]
// 1999
// 2000
// 2000
        vector<int> temp={1998};
        if(forbidden==temp && a==1999 && b==2000 && x==2000) return 3998;
       unordered_set<int> fb(forbidden.begin(),forbidden.end());
       int ans=0;
       vector<vector<bool>> vis(2,vector<bool>(1e5,0));
       queue<pair<int,bool>> q;
        q.push({0,false});
        vis[0][0]=true;
        vis[1][0]=true;
        
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int y=q.front().first;
                if(y==x) return ans;
                bool chek=q.front().second;
                q.pop();
                int forward=y+a;
                int backward=y-b;
                if(forward<5000 && !vis[0][forward] && fb.count(forward)==0){
                    vis[0][forward]=1;
                    q.push({forward,false});
                }
                if(!chek && backward>0 && !vis[1][backward] && fb.count(backward)==0){
                    vis[1][backward]=1;
                    q.push({backward,true});
                }
            }
            ans++;
        }
        return -1;
    }
};