class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        
        unordered_set<string> dead(deadends.begin(),deadends.end());
        if(dead.count("0000")) return -1;
        if(target=="0000") return 0;
        vector<vector<char>> dir={{'9','1'},{'0','2'},{'1','3'},{'2','4'},{'3','5'},{'4','6'},{'5','7'},{'6','8'},{'7','9'},{'8','0'}};
        unordered_map<string,bool> vis;
        vis["0000"]=true;
        queue<string> q;
        q.push("0000");
        int ans=0;
        while(!q.empty()){
            ans++;
            int size=q.size();
            while(size--){
                string s=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    char temp=s[i];
                    s[i]=dir[s[i]-'0'][0];
                    if(s==target) return ans;
                    if(!vis[s] && dead.count(s)==0){
                        vis[s]=true;
                        q.push(s);
                    }
                     s[i]=dir[temp-'0'][1];
                    if(s==target) return ans;
                    if(!vis[s] && dead.count(s)==0){
                        vis[s]=true;
                        q.push(s);
                    }
                    s[i]=temp;
                }
            }
        }
        return -1;
    }
};