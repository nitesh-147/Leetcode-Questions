class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> visited(n,0);

        queue<int> q;
        q.push(0);
        visited[0]=1;
        int cnt=0;

        while(!q.empty()){
            cnt++;
            int x=q.front();
            q.pop();
            for(int i:rooms[x]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
        if(cnt==n)return true;
        else return false;

    }
};