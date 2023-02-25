class Solution {
public:
    int ladderLength(string start, string end, vector<string>& bank) {
        if(start==end) return 0;
        
        vector<char> dir={'A', 'C', 'G', 'T'};
        unordered_set<string> bk(bank.begin(),bank.end());
        if(!bk.count(end)) return 0;
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
                    for(int j=0;j<26;j++){
                        t[i]=(j+'a');
                        
                        if(!vis[t] && bk.count(t)){
                            if(t==end) return ans+1;
                            vis[t]=true;
                            q.push(t);
                        }
                    }
                    t[i]=temp;
                }
            }
        }
        return 0;
    }
};