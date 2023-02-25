class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(x+y<z) return false;
        vector<int> dir={x,-x,y,-y};
        unordered_map<int,bool> vis;
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(auto i:dir){
                int ncurr=curr+i;
                if(ncurr<0 || ncurr>x+y) continue;
                if(ncurr==z) return true;
                if(!vis[ncurr]){
                    vis[ncurr]=true;
                    q.push(ncurr);
                }
            }
        }
        return false;
    }
};