class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,list<int>> m;
        for(auto i:trust){
            m[i[0]].push_back(i[1]);
            // m[i[1]].push_back(i[0]);
        }
        vector<int> in(n+1,0);
        vector<int> out(n+1,0);

        for(auto i:m){
            out[i.first]=i.second.size();
            for(auto j:i.second){
                in[j]++;
            }
        }
        for(int i=1;i<=n;i++){
            if(out[i]==0 && in[i]==n-1) return i;
        }
        return -1;
    }
};