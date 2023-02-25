class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        if(start==end) return 0;
        vector<char> dir={'A', 'C', 'G', 'T'};
        unordered_set<string> bk(bank.begin(),bank.end());
        unordered_map<string,bool> vis;
        queue<string> q;
        q.push(start);
        vis[start]=true;
        int ans=0;
        while(!q.empty()){
            ans++;
            int size=q.size();
            while(size--){
                string t=q.front();
                q.pop();
                for(int i=0;i<t.size();i++){
                    char temp=t[i];
                    for(auto j:dir){
                        t[i]=j;
                        
                        if(!vis[t] && bk.count(t)){
                            if(t==end) return ans;
                            vis[t]=true;
                            q.push(t);
                        }
                    }
                    t[i]=temp;
                }
            }
        }
        return -1;
    }
};